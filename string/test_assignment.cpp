
// testing overload= operator
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
		String test1;
		String test2;
		test1 = test2;

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2;
		test1 = test2;

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello world");
		String test2("howdy");
		test1 = test2;

		// VERIFY
		assert(test1 == "howdy");
		assert(test2 == "howdy");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2('z');
		test1 = test2;

		// VERIFY
		assert(test1 == 'z');
		assert(test2 == 'z');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2("hello");
		test1 = test2;

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2("hello");
		test1 = test2;

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2("hello");
		String test3("howdy");
		test1 = test2 = test3;

		// VERIFY
		assert(test1 == "howdy");
		assert(test2 == "howdy");
		assert(test2 == "howdy");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2('x');
		test1 = test2;

		// VERIFY
		assert(test1 == 'x');
		assert(test2 == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2;
		String test3;
		test1 = test2 = test3;

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
		assert(test3 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2;
		String test3("hello");
		test1 = test2 = test3;

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
		assert(test3 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2("howdy");
		String test3("hello");
		test1 = test2 = test3;

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
		assert(test3 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('a');
		String test2('b');
		String test3('c');
		test1 = test2 = test3;

		// VERIFY
		assert(test1 == 'c');
		assert(test2 == 'c');
		assert(test3 == 'c');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2;
		String test3;
		String test4;
		test1 = test2 = test3 = test4;

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
		assert(test3 == "");
		assert(test4 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("this");
		String test2("is");
		String test3('a');
		String test4("test");
		test1 = test2 = test3 = test4;

		// VERIFY
		assert(test1 == "test");
		assert(test2 == "test");
		assert(test3 == "test");
		assert(test4 == "test");
	}
	std::cout << "Done testing overload= operator" << std::endl;
}

