
// testing charArray int constructor
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
		char test1[] = "";
		String result(0, test1);

		// VERIFY
		assert(result.capacity() == 0);
		assert(result == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "";
		String result(1, test1);

		// VERIFY
		assert(result.capacity() == 1);
		assert(result == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "";
		String result(15, test1);

		// VERIFY
		assert(result.capacity() == 15);
		assert(result == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "hello";
		String result(5, test1);

		// VERIFY
		assert(result.capacity() == 5);
		assert(result == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "hello";
		String result(10, test1);

		// VERIFY
		assert(result.capacity() == 10);
		assert(result == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "x";
		String result(1, test1);

		// VERIFY
		assert(result.capacity() == 1);
		assert(result == "x");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "x";
		String result(10, test1);

		// VERIFY
		assert(result.capacity() == 10);
		assert(result == "x");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "hello world";
		String result(11, test1);

		// VERIFY
		assert(result.capacity() == 11);
		assert(result == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "hello world";
		String result(12, test1);

		// VERIFY
		assert(result.capacity() == 12);
		assert(result == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char test1[] = "hello world";
		String result(25, test1);

		// VERIFY
		assert(result.capacity() == 25);
		assert(result == "hello world");
	}
	std::cout << "Done testing charArray int constructor." << std::endl;
}
  
