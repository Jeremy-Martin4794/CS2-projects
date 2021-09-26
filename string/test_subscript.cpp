
// testing subscript[]
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	// testing accessor
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		char result = test[0];

		// VERIFY
		assert(test == 'x');
		assert(result == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		char result = test[4];

		// VERIFY
		assert(test == "hello");
		assert(result == 'o');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		char result = test[5];

		// VERIFY
		assert(test == "hello world");
		assert(result == ' ');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		char result = test[0];

		// VERIFY
		assert(test == "hello");
		assert(result == 'h');
	}

	// testing mutator
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		char result = test[0] = 'a';

		// VERIFY
		assert(test == 'a');
		assert(result == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		char result = test[1] = 'q';

		// VERIFY
		assert(test == "hqllo");
		assert(result == 'q');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		char result = test[10] = ' ';

		// VERIFY
		assert(test == "hello worl ");
		assert(result == ' ');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		char result = test[0] = 'h';

		// VERIFY
		assert(test == "hello world");
		assert(result == 'h');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		char result = test[0] = 'e';

		// VERIFY
		assert(test == "eello world");
		assert(result == 'e');
	}
	std::cout << "Done testing subscript[]" << std::endl;
}
 
