// project 1 definitions
// 9/26/2020
// Jeremy Martin

#include<iostream>
#include "bigint.hpp"

// constructor initializes bigint to 0
bigint::bigint(){
	for (int i = 0; i < capacity; ++i) {
		intArray_[i] = 0;
	}
}

// constructor initializes bigint to a provided integer
bigint::bigint(int num) {
	int remainder = num;
	for (int i = 0; i < capacity; ++i) {
		intArray_[i] = remainder%10;
		remainder = remainder / 10;
	}
}

// constructor initializes bigint to a provided char
bigint::bigint(const char val[]) {
	for (int i = 0; i < capacity; ++i) {
		intArray_[i] = 0;
	}
	int size = 0;
	while (val[size] != '\0') {
		++size;
	}
	for (int i = 0; i < size; ++i) {
		intArray_[i] = val[size - 1 - i] - '0';
	}
}

// prints the array with for debugging purposes
void bigint::debugPrint(std::ostream& stream) const {
	for (int i = 0; i < capacity; ++i) {
		stream << intArray_[capacity - 1 - i] << "|";
	}
}

// overloads the "output" operator
std::ostream& operator<<(std::ostream& stream, const bigint& num) {
	int find = 0;
	for (int i = capacity-1; i > -1; --i) {
		if (num.intArray_[i] != 0) {
			find = i;
			break;
		}
	}
	for (int i = 0; i < find + 1; ++i) {
		stream << num.intArray_[find - i];
		if (i%80 == 0 && i ) stream << std::endl;
	}
	return stream;
}

// overloads the "equal to" operator
bool operator==(bigint one, bigint two) {
	bool equal = false;
	int found = 0;
	for (int i = 0; i < capacity; ++i) {
		if (one.intArray_[capacity - 1 - i] != two.intArray_[capacity - 1 - i]) {
			found = 1;
		}
	}
	if (found == 0)
		equal = true;
	return equal;
}

// overload operator+ take two bigints and adds them together into a seperate bigint that is returned
bigint bigint::operator+(const bigint& bigint1) const {
	int find = 0;
	for (int i = capacity - 1; i > -1; --i) {
		if (intArray_[i] != 0) {
			find = i;
			break;
		}
	}
	int findbigint = 0;
	for (int i = capacity - 1; i > -1; --i) {
		if (bigint1.intArray_[i] != 0) {
			findbigint = i;
			break;
		}
	}
	bigint temp = { 0 };
	for (int i = 0; i < capacity; ++i) {
		temp.intArray_[i] = temp.intArray_[i] + intArray_[i] + bigint1.intArray_[i];
	}
	int remainder = 0;
	for (int i = 0; i < capacity; ++i) {
		if (temp.intArray_[i] > 9) {
			remainder = temp.intArray_[i];
			temp.intArray_[i] = remainder % 10;
			remainder = remainder / 10;
			temp.intArray_[i + 1] = temp.intArray_[i + 1] + remainder;
		}
	}
	return temp;
}

// retrieves the value at the index of a bigint
int bigint::operator[](int index) const {
	int find = 0;
	for (int i = capacity - 1; i > -1; --i) {
		if (intArray_[i] != 0) {
			find = i;
			break;
		}
	}
	int indexVal = -1;
	for (int i = 0; i < capacity; ++i) {
		if (index == i) {
			indexVal = intArray_[find - i];
		}
	}
	return indexVal;
}

// overload output operator, takes a stream and a puts it into a bigint
std::istream& operator>>(std::istream& stream, bigint& num) {
	int i = 0;
	char temp = 0;
	char tempArray[capacity + 1];
	while (i < capacity) {
		stream >> temp;
		if (temp == ';') {
			temp = '\0';
			tempArray[i] = temp;
			num = bigint(tempArray);
			break;
		}
		else if(temp == '\n' || temp == '\r'){}
		else { 
			tempArray[i] = temp;
			++i;
		}
	}
	return stream;
}

// multiplies a bigint by a specified single digit number and returns a bigint
bigint bigint::timesDigit(int num) const {
	int remainder = 0;
	bigint temp = { 0 }; 
	for (int i = 0; i < capacity; ++i) {
		temp.intArray_[i] = num * intArray_[i] + remainder;
		remainder = 0;
		if (temp.intArray_[i] > 9) {
			remainder = temp.intArray_[i];
			temp.intArray_[i] = remainder % 10;
			remainder = remainder / 10;
		}
	}
	return temp;
}

// multiplies a bigint by ten to a number, and returns a bigint
bigint bigint::times10(int num) const {
	bigint temp = { 0 };
	for (int i = 0; i < capacity; ++i) {
		if (i < num) {
			temp.intArray_[i] = 0;
		}
		else temp.intArray_[i] = intArray_[i - num]; 
	}
	return temp;
}

// uses timesDigit and times10 functions to multiply two bigints together
// returns a bigint of the result
bigint bigint::operator*(const bigint& bigint1) const {
	bigint product = { 0 };
	for (int i = 0; i < capacity; ++i) {
		bigint temp = timesDigit(bigint1.intArray_[i]);
		product = product + temp.times10(i);
	}
	return product;
}
