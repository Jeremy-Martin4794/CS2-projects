
// testing charArray constructor
// Jeremy Martin
#include "string.hpp"
#include <cassert> 
#include <iostream>

//===========================================================================
int main()
{
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("");

		// VERIFY
		assert(test == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test(" ");

		// VERIFY
		assert(test == " ");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("x");

		// VERIFY
		assert(test == "x");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("ab");

		// VERIFY
		assert(test == "ab");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("abc");

		// VERIFY
		assert(test == "abc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("aabc");

		// VERIFY
		assert(test == "aabc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("zzzz ");

		// VERIFY
		assert(test == "zzzz ");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("hello world");

		// VERIFY
		assert(test == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("This is a test!");

		// VERIFY
		assert(test == "This is a test!");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test(" This is a test!");

		// VERIFY
		assert(test == " This is a test!");
	}

	std::cout << "Done testing charArray constructor." << std::endl;

}

