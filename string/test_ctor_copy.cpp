
// testing copy constructor
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
		String test2(test1);

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2(test1);

		// VERIFY
		assert(test1 == 'x');
		assert(test2 == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2(test1);
		test2 = String('x');
		String test3(test2);

		// VERIFY
		assert(test1 == "");
		assert(test2 == 'x');
		assert(test3 == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(test1);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello world");
		String test2(test1);

		// VERIFY
		assert(test1 == "hello world");
		assert(test2 == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2(test1);
		String test3(test2);

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
		assert(test3 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(test1);
		String test3(test2);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "hello");
		assert(test3 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(test1);
		test2 = String("howdy");
		String test3(test2);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "howdy");
		assert(test3 == "howdy");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2(test1);
		test2 = String();
		String test3(test2);

		// VERIFY
		assert(test1 == 'x');
		assert(test2 == "");
		assert(test3 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(test1);
		test2 = String();
		String test3(test2);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "");
		assert(test3 == "");
	}
	std::cout << "Done testing copy constructor." << std::endl;

}
 
