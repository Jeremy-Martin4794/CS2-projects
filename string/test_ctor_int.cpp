
// testing int constructor and reset capacity method
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	// testing int constructor
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(0);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(1);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(2);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 2);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1(10);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 10);
	}

	// testing reset capacity method
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		test1.resetCapacity(0);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 0);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		test1.resetCapacity(1);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1;
		test1.resetCapacity(9);

		// VERIFY
		assert(test1 == "");
		assert(test1.capacity() == 9);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		test1.resetCapacity(0);

		// VERIFY
		assert(test1 == 'x');
		assert(test1.capacity() == 1);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1('x');
		test1.resetCapacity(6);

		// VERIFY
		assert(test1 == 'x');
		assert(test1.capacity() == 6);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		test1.resetCapacity(3);

		// VERIFY
		assert(test1 == "hello");
		assert(test1.capacity() == 5);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		test1.resetCapacity(10);

		// VERIFY
		assert(test1 == "hello");
		assert(test1.capacity() == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(10);
		test2 = test1;
		test1.resetCapacity(3);

		// VERIFY
		assert(test1 == "hello");
		assert(test1.capacity() == 5);
		assert(test2 == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test1("hello");
		String test2(3);
		test2 = test1;
		test1.resetCapacity(3);

		// VERIFY
		assert(test1 == "hello");
		assert(test1.capacity() == 5);
		assert(test2 == "hello");
	}

	std::cout << "Done testing int constructor and reset capacity method." << std::endl;

}

