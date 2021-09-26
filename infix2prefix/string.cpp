// defenitions for string with variable size array
// 10/15/20
// Jeremy Martin

#include<iostream>
#include"string.hpp"

//Empty string
String::String() {  
	stringSize = 1;
	str = new char[stringSize];
	str[0] = '\0';
}       

//String('x')
String::String(char x) {
	stringSize = 2;
	str = new char[stringSize];
	str[0] = x;
	str[1] = '\0';
}

//String("abc")
String::String(const char arr[]) {
	int index = 0;
	while (arr[index] != '\0') {
		++index;
	}
	stringSize = index + 1;

	str = new char[stringSize];
	int i = 0;
	while (i < stringSize - 1) {
		str[i] = arr[i];
		++i;
	}
	str[i] = '\0';
}

//Copy Constructor
String::String(const String& org) {
	stringSize = org.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; ++i) {
		str[i] = org.str[i];
	}
}

//Destructor
String::~String() {
	if(str != NULL)
		delete[] str;
}

//Constant time swap
void String::swap(String& rhs) {
	int tempsize = rhs.stringSize;
	rhs.stringSize = stringSize;
	stringSize = tempsize;

	char* tempstr = rhs.str;
	rhs.str = str;
	str = tempstr;
}           

//Assignment Copy
String& String::operator=(String rhs) {
	if (this != &rhs) {
		stringSize = rhs.stringSize;
		delete[] str;
		str = new char[stringSize];
		for (int i = 0; i < stringSize; ++i) {
			str[i] = rhs.str[i];
		}
	}
	return *this;
}

//Accessor/Modifier
char& String::operator[](int index) {
	if(index < 0) index = 0;
	if(index > length()) index = length();
	return str[index];
}

//Accessor
char String::operator[](int index) const {
	if(index < 0) index = 0;
	if(index > length()) index = length();
	return str[index];
}

//Max chars that can be stored (not including null)
int String::capacity() const {
	return stringSize - 1;
}

//Actual number of chars in string
int String::length() const {
	int i = 0;
	while (str[i] != '\0') {
		++i;
	}
	return i;
}

String String::operator+(const String& str2) const {
	int len1 = length();
	int len2 = str2.length();
	int size = len1 + len2;
	String temp(size, str);
	int i = 0;
	while(str2.str[i] != '\0') {
		temp.str[len1 + i] = str2.str[i];
		++i;
	}
	temp.str[len1 + i] = '\0';
	return temp;
}

String& String::operator+=(const String& str2) {
	int len1 = length();
	int len2 = str2.length();
	int size = len1 + len2;
	resetCapacity(size);
	int i = 0;
	while (str2.str[i] != '\0') {
		str[len1 + i] = str2.str[i];
		++i;
	}
	str[len1 + i] = '\0';
	return *this;
}

bool String::operator==(const String& str2) const {
	int found = 0;
	if (length() == str2.length()) {
		for (int i = 0; i <= length(); ++i) {
			if (str[i] != str2.str[i])
				found = -1;
		}
		if (found != -1)
			return true;
	}
	return false;
}

bool String::operator<(const String& str2) const {
	int size = 0;
	if (stringSize <= str2.stringSize)
		size = stringSize;
	else
		size = str2.stringSize;
	int i = 0;
	while (str[i] == str2.str[i] && i < size) {
		++i;
	}
	return str[i] < str2.str[i];
}

//The sub-string from staring position to ending position
String String::substr(int start, int end) const {
	int len = length();
	if (start < 0)
		start = 0;
	if (start > len)
		return String();
	if (start > end)
		return String();
	if (end >= len)
		end = len - 1;
	String temp(str);
	for (int i = start; i < stringSize; ++i) {
		temp.str[i - start] = str[i];
		if (i == end) {
			temp.str[i - start + 1] = '\0';
			temp.stringSize = i - start + 2;
			break;
		}
	}
	return temp;
}

//Find location of charater starting at a position
int String::findch(int pos, char ch) const {
	if (pos < 0)
		pos = 0;
	if (pos > stringSize - 1)
		return -1;
	for (int i = pos; i < stringSize; ++i) {
		if (str[i] == ch)
			return i;
	}
	return -1;
}

//Find location of str starting at a position
int String::findstr(int pos, const String& substr1) const {
	for (int i = pos; i < stringSize; ++i) {
		for (int j = pos; j <= stringSize - 1; ++j) {
			if (substr(i, j) == substr1)
				return i;
		}
	}
	return -1;
}

std::ostream& operator<<(std::ostream& stream, const String& string) {
	for (int i = 0; i < string.length(); ++i) {
		stream << string.str[i];
	}
	return stream;
}

std::istream& operator>>(std::istream& stream, String& string) {
	char c;
	int i = 0;
	stream.get(c);
	while (c != ' ' && !(stream.eof()) && c != '\n') {
		string.resetCapacity(i);
		string[i] = c;
		++i;
		stream.get(c);
	}
	string.resetCapacity(i);
	string[i] = '\0';
	return stream;
}

std::vector<String> String::split(char c) const {
	String temp;
	std::vector<String> vec;
	int i = 0;
	int index = 0;
	for (i = 0; i < stringSize; ++i) {
		if (str[i] != c) {
			temp.resetCapacity(i - index);
			temp[i - index] = str[i];
		}
		else {
			temp.resetCapacity(i - index);
			temp[i - index] = '\0';
			vec.push_back(temp);
			temp = String();
			index = i + 1;
		}
	}
	temp.resetCapacity(i - index);
	temp[i - index] = '\0';
	vec.push_back(temp);
	return vec;
}

// private String methods

//String(10) - capacity 10, empty string
String::String(int cap) {
	stringSize = cap + 1;
	str = new char[stringSize];
	str[0] = '\0';
}

//String(10, "abc") - capacity 10 with "abc"
String::String(int cap, const char arr[]) {
	stringSize = cap + 1;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; ++i) {
		if (arr[i] != '\0') {
			str[i] = arr[i];
		}
		else {
			str[i] = '\0';
			break;
		}
	}
}

//Resets capacity to N, keeps string intact ?
void String::resetCapacity(int cap) {
	if (stringSize >= cap + 1)
		return;
	stringSize = cap + 1;
	char* temp = new char[cap + 1];

	int i = 0;
	while(i < stringSize - 1){
		temp[i] = str[i];
		++i;
	}
	temp[i] = '\0';
	delete[] str;
	str = temp;
}



// String functions

String operator+(const char arr[], const String& str2) {
	return(String(arr) + str2);
}

String operator+(char x, const String& str2) {
	return(String(x) + str2);
}

bool operator==(const char arr[], const String& str2) {
	return (String(arr) == str2);
}

bool operator==(char x, const String& str2) {
	return (String(x) == str2);
}

bool operator<(const char arr[], const String& str2) {
	return(String(arr) < str2);
}

bool operator<(char x, const String& str2) {
	return(String(x) < str2);
}

bool operator<=(const String& str1, const String& str2) {
	return(str1 < str2 || str1 == str2);
}

bool operator!=(const String& str1, const String& str2) {
	return (!(str1 == str2));
}

bool operator>=(const String& str1, const String& str2) {
	return(!(str1 < str2) || str1 == str2);
}

bool operator>(const String& str1, const String& str2) {
	return(!(str1 < str2) && !(str1 == str2));
}
