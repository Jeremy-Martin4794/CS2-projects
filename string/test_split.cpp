
// testing split method
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>
#include<vector>

//===========================================================================
int main()
{
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == "");
		assert(test2[0] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == "x");
		assert(test2[0] == "x");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		std::vector<String> test2 = test1.split('x');

		// VERIFY
		assert(test1 == "x");
		assert(test2[0] == "");
		assert(test2[1] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("this is a test");
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		//assert(test == "this");
		assert(test1 == "this is a test");
		assert(test2[0] == "this");
		assert(test2[1] == "is");
		assert(test2[2] == "a");
		assert(test2[3] == "test");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == "hello");
		assert(test2[0] == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		std::vector<String> test2 = test1.split('l');

		// VERIFY
		assert(test1 == "hello");
		assert(test2[0] == "he");
		assert(test2[1] == "");
		assert(test2[2] == "o");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("this-is-a-test");
		std::vector<String> test2 = test1.split('-');

		// VERIFY
		assert(test1 == "this-is-a-test");
		assert(test2[0] == "this");
		assert(test2[1] == "is");
		assert(test2[2] == "a");
		assert(test2[3] == "test");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("abababab");
		std::vector<String> test2 = test1.split('b');

		// VERIFY
		assert(test1 == "abababab");
		assert(test2[0] == "a");
		assert(test2[1] == "a");
		assert(test2[2] == "a");
		assert(test2[3] == "a");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("this is a test");
		std::vector<String> test2 = test1.split('t');

		// VERIFY
		assert(test1 == "this is a test");
		assert(test2[0] == "");
		assert(test2[1] == "his is a ");
		assert(test2[2] == "es");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(" this is a test ");
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == " this is a test ");
		assert(test2[0] == "");
		assert(test2[1] == "this");
		assert(test2[2] == "is");
		assert(test2[3] == "a");
		assert(test2[4] == "test");
		assert(test2[5] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("abc ef gh");
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == "abc ef gh");
		assert(test2[0] == "abc");
		assert(test2[1] == "ef");
		assert(test2[2] == "gh");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("-a--b-");
		std::vector<String> test2 = test1.split('-');

		// VERIFY
		assert(test1 == "-a--b-");
		assert(test2[0] == "");
		assert(test2[1] == "a");
		assert(test2[2] == "");
		assert(test2[3] == "b");
		assert(test2[4] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("aaaaaa");
		std::vector<String> test2 = test1.split('a');

		// VERIFY
		assert(test1 == "aaaaaa");
		assert(test2[0] == "");
		assert(test2[1] == "");
		assert(test2[2] == "");
		assert(test2[3] == "");
		assert(test2[4] == "");
		assert(test2[5] == "");
		assert(test2[6] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("0hello0world0");
		std::vector<String> test2 = test1.split('0');

		// VERIFY
		assert(test1 == "0hello0world0");
		assert(test2[0] == "");
		assert(test2[1] == "hello");
		assert(test2[2] == "world");
		assert(test2[3] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(" hello ");
		std::vector<String> test2 = test1.split(' ');

		// VERIFY
		assert(test1 == " hello ");
		assert(test2[0] == "");
		assert(test2[1] == "hello");
		assert(test2[2] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("000111000");
		std::vector<String> test2 = test1.split('1');

		// VERIFY
		assert(test1 == "000111000");
		assert(test2[0] == "000");
		assert(test2[1] == "");
		assert(test2[2] == "");
		assert(test2[3] == "000");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("000111000");
		std::vector<String> test2 = test1.split('0');

		// VERIFY
		assert(test1 == "000111000");
		assert(test2[0] == "");
		assert(test2[1] == "");
		assert(test2[2] == "");
		assert(test2[3] == "111");
		assert(test2[4] == "");
		assert(test2[5] == "");
		assert(test2[6] == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(" hello world ");
		std::vector<String> test2 = test1.split('l');

		// VERIFY
		assert(test1 == " hello world ");
		assert(test2[0] == " he");
		assert(test2[1] == "");
		assert(test2[2] == "o wor");
		assert(test2[3] == "d ");
	}

	std::cout << "Done testing split method." << std::endl;

}
 
