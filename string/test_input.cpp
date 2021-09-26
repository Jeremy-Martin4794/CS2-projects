
// testing input and output
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>
#include<fstream>

//===========================================================================
int main()
{
	{
		String  test;

		std::ifstream input("log_1_tiny.txt");
		assert(input.is_open());

		// VERIFY
		input >> test;
		assert(test == "131.123.47.176");
		std::cout << test << ' ';

		input.close();
	}

	{
		String test1;

		std::ifstream input("log_1_tiny.txt");
		assert(input.is_open());

		// VERIFY
		input >> test1;
		assert(test1 == "131.123.47.176");
		std::cout << test1;
		input >> test1;
		assert(test1 == '-');
		std::cout << test1;
		input >> test1;
		assert(test1 == '-');
		std::cout << test1;
		input >> test1;
		assert(test1 == "[18/Sep/2002:12:05:25");
		std::cout << test1;
		input >> test1;
		assert(test1 == "-0400]");
		std::cout << test1;
		input >> test1;
		assert(test1 == "\"GET");
		std::cout << test1;
		input >> test1;
		assert(test1 == "/~darci/");
		std::cout << test1;
		input >> test1;
		assert(test1 == "HTTP/1.0\"");
		std::cout << test1;
		input >> test1;
		assert(test1 == "200");
		std::cout << test1;
		input >> test1;
		std::cout << test1;
		assert(test1 == "5625");
	//	std::cout << test1;

		input.close();
	}
	std::cout << "\nDone Testing input and output" << std::endl;
}
 
