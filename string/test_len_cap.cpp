
// testing length and capacity functions
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
		String test;
		int result = test.capacity();

		// VERIFY
		assert(test == "");
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("hello world");
		int result = test.capacity();

		// VERIFY
		assert(test == "hello world");
		assert(result == 11);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("this is a test  ");
		int result = test.capacity();

		// VERIFY
		assert(test == "this is a test  ");
		assert(result == 16);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test;
		int result = test.length();

		// VERIFY
		assert(test == "");
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test('x');
		int result = test.length();

		// VERIFY
		assert(test == 'x');
		assert(result == 1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("abc");
		int result = test.length();

		// VERIFY
		assert(test == "abc");
		assert(result == 3);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("Hello World!");
		int result = test.length();

		// VERIFY
		assert(test == "Hello World!");
		assert(result == 12);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test(" GGGG ");
		int result = test.length();

		// VERIFY
		assert(test == " GGGG ");
		assert(result == 6);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("  ");
		int result = test.length();

		// VERIFY
		assert(test == "  ");
		assert(result == 2);
	}
	std::cout << "Done testing length and capacity functions." << std::endl;

}

