
// testing swap assign
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
		test1.swap(test2);

		// VERIFY
		assert(test1 == "");
		assert(test2 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2;
		test1.swap(test2);

		// VERIFY
		assert(test1 == "");
		assert(test2 == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		String test2("hello");
		test1.swap(test2);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2("hello");
		test1.swap(test2);

		// VERIFY
		assert(test1 == "hello");
		assert(test2 == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('a');
		String test2('b');
		test1.swap(test2);

		// VERIFY
		assert(test1 == 'b');
		assert(test2 == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('a');
		String test2('a');
		test1.swap(test2);

		// VERIFY
		assert(test1 == 'a');
		assert(test2 == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2("how are you");
		test1.swap(test2);

		// VERIFY
		assert(test1 == "how are you");
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2;
		test1.swap(test2);

		// VERIFY
		assert(test1 == "");
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2;
		String test3('x');
		test1.swap(test2);
		test2.swap(test3);

		// VERIFY
		assert(test1 == "");
		assert(test2 == 'x');
		assert(test3 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		String test2('x');
		String test3("hello");
		test1.swap(test2);
		test2.swap(test3);

		// VERIFY
		assert(test1 == 'x');
		assert(test2 == "hello");
		assert(test3 == "");
	}
	std::cout << "Done testing swap assign method" << std::endl;
}

