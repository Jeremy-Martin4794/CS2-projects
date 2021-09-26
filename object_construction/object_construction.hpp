// object_construction class header file
// 10/15/2020
// Jeremy Martin

#ifndef Test_class
#define Test_class

#include<iostream>

class Test {
public:

	Test(); //default constructor
	~Test(); //destructor
	Test(const Test&); //copy constructor
	Test& operator=(Test); //overload assignment

};

#endif Test_class

