
// main file that reads from text file
// puts contents into bigint
// 9/20/2020
// Jeremy Martin

//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
	std::ifstream in("data1-1.txt");    // Define stream for input
	if (!in) {                           // Make sure it opened correctly.
		std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
		exit(1);
	}

	//Until end of file
	   //Read two bigints
	   //Print them out
	   //Add them together
	   //Print out results
	bigint Test1(0);
	bigint Test2(0);
	in >> Test1;
	in >> Test2;
	while (!in.eof()) {
		std::cout << Test1 << '\n'; //outputs the first bigint
		std::cout << std::endl;
		std::cout << Test2 << '\n'; //outputs the second bigint
		std::cout << std::endl;
		bigint result = Test1 + Test2; //adds bigint 1 and 2
		std::cout << result << '\n'; //prints out the result of adding the two bigints
		std::cout << std::endl;
		in >> Test1;
		in >> Test2;
	}

	in.close();
	return 0;
}



