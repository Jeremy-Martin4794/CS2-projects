// object_construction method defenitions
// 10/15/2020
// Jeremy Martin

#include<iostream>
#include"object_construction.hpp"

//default constructor
Test::Test() {
	std::cout << "default constructor called" << std::endl;
}

//destructor
Test::~Test() {
	std::cout << "destructor called" << std::endl;
}

//copy constructor
Test::Test(const Test& org) {
	std::cout << "copy constructor called" << std::endl;
}

//overload assignment
Test& Test::operator=(Test rhs) {
	std::cout << "assignment method called" << std::endl;
	return *this;
}
