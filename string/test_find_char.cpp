
// testing findch()
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
		String  test;

		// TEST
		int result = test.findch(0, 'a');

		// VERIFY
		assert(test == "");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		int result = test.findch(0, 'h');

		// VERIFY
		assert(test == "hello");
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello ");

		// TEST
		int result = test.findch(0, ' ');

		// VERIFY
		assert(test == "hello ");
		assert(result == 5);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findch(0, 'a');

		// VERIFY
		assert(test == "hello world");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("Hello world");

		// TEST
		int result = test.findch(4, 'l');

		// VERIFY
		assert(test == "Hello world");
		assert(result == 9);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("Hello world");

		// TEST
		int result = test.findch(3, 'l');

		// VERIFY
		assert(test == "Hello world");
		assert(result == 3);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(2,'a');

		// VERIFY
		assert(test == "this is a test");
		assert(result == 8);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(9, 'a');

		// VERIFY
		assert(test == "this is a test");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(1, 't');

		// VERIFY
		assert(test == "this is a test");
		assert(result == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(11, 't');

		// VERIFY
		assert(test == "this is a test");
		assert(result == 13);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(0, 't');

		// VERIFY
		assert(test == "this is a test");
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("this is a test");

		// TEST
		int result = test.findch(2, 'h');

		// VERIFY
		assert(test == "this is a test");
		assert(result == -1);
	}
	std::cout << "Done testing findch() function" << std::endl;
} 
 
