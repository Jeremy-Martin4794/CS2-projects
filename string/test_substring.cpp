
// testing substr() function
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
		String result = test.substr(1, 3);

		// VERIFY
		assert(test == "");
		assert(result == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test('x');

		// TEST
		String result = test.substr(0, 0);

		// VERIFY
		assert(test == 'x');
		assert(result == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		String result = test.substr(3, 1);

		// VERIFY
		assert(test == "hello");
		assert(result == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		String result = test.substr(-1, 2);

		// VERIFY
		assert(test == "hello");
		assert(result == "hel");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		String result = test.substr(1, 5);

		// VERIFY
		assert(test == "hello");
		assert(result == "ello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		String result = test.substr(0,4);

		// VERIFY
		assert(test == "hello");
		assert(result == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello");

		// TEST
		String result = test.substr(1,3);

		// VERIFY
		assert(test == "hello");
		assert(result == "ell");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		String result = test.substr(2, 10);

		// VERIFY
		assert(test == "hello world");
		assert(result == "llo world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		String result = test.substr(0, 4);

		// VERIFY
		assert(test == "hello world");
		assert(result == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("hello world");

		// TEST
		String result = test.substr(6, 6);

		// VERIFY
		assert(test == "hello world");
		assert(result == "w");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("abcdefghijklmnopqrstuvwxyz");

		// TEST
		String result = test.substr(3, 20);

		// VERIFY
		assert(test == "abcdefghijklmnopqrstuvwxyz");
		assert(result == "defghijklmnopqrstu");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  test("abcdefghijklmnopqrstuvwxyz");

		// TEST
		String result = test.substr(0, 18);

		// VERIFY
		assert(test == "abcdefghijklmnopqrstuvwxyz");
		assert(result == "abcdefghijklmnopqrs");
	}

	std::cout << "Done Testing substr() function" << std::endl;
}

