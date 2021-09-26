// project 1 header file
// 9/26/2020
// Jeremy Martin

#include <iostream>

// global constant for array
const int capacity = 400;

#ifndef bigint_hpp
#define bigint_hpp

class bigint{
private:
	int intArray_[capacity]; // array for bigint
public:
	bigint();
	bigint(int);
	bigint(const char[]);

	void debugPrint(std::ostream&) const; 

	bigint timesDigit(int) const;
	bigint times10(int) const;

	bigint operator*(const bigint&) const;
	bigint operator+(const bigint&) const;
	int operator[](int) const;

	friend std::istream& operator>>(std::istream&, bigint&);
	friend std::ostream& operator<<(std::ostream&, const bigint&);
	friend bool operator==(bigint, bigint);
};

#endif bigint_hpp
