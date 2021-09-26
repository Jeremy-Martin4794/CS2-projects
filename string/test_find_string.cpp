
// testing findstr() function
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
		int result = test.findstr(0, "hello");

		// VERIFY
		assert(test == "");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		int result = test.findstr(0, "hello");

		// VERIFY
		assert(test == 'x');
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		int result = test.findstr(0, 'x');

		// VERIFY
		assert(test == 'x');
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		int result = test.findstr(1, 'x');

		// VERIFY
		assert(test == 'x');
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		int result = test.findstr(1, "ello");

		// VERIFY
		assert(test == "hello");
		assert(result == 1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		int result = test.findstr(1, "lo");

		// VERIFY
		assert(test == "hello");
		assert(result == 3);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(0, "world");

		// VERIFY
		assert(test == "hello world");
		assert(result == 6);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(1, "hello");

		// VERIFY
		assert(test == "hello world");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(0, "hello");

		// VERIFY
		assert(test == "hello world");
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(2, "hello");

		// VERIFY
		assert(test == "hello world");
		assert(result == -1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(0, "llo");

		// VERIFY
		assert(test == "hello world");
		assert(result == 2);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		int result = test.findstr(2, "wo");

		// VERIFY
		assert(test == "hello world");
		assert(result == 6);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world hello world");

		// TEST
		int result = test.findstr(3, "world");

		// VERIFY
		assert(test == "hello world hello world");
		assert(result == 6);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world hello world");

		// TEST
		int result = test.findstr(7, "world");

		// VERIFY
		assert(test == "hello world hello world");
		assert(result == 18);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world hello world");

		// TEST
		int result = test.findstr(18, "world");

		// VERIFY
		assert(test == "hello world hello world");
		assert(result == 18);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world hello world");

		// TEST
		int result = test.findstr(19, "world");

		// VERIFY
		assert(test == "hello world hello world");
		assert(result == -1);
	}

	std::cout << "Done Testing findstr() function" << std::endl;
}
 
