// object_construction main
// 10/15/2020
// Jeremy Martin

#include<iostream>
#include"object_construction.hpp"

int main() {

	Test first;
	Test second(first);
	Test third;
	third = second;

	std::cout << "done testing all methods" << std::endl;

}
