
// testing <, <=, >, >= functions
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	// testing string < string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right;
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right;
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right('x');
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right;
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right ('x');
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('h');
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == 'h');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('h');
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'h');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('i');
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'i');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('a');
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello world");
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello world");
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello world");
		assert(right == "hello");
	}

	// testing char < string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('x');
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('a');
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == 'a');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('x');
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('a');
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'a');
	}

	// testing char array < string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left[] = "he";
		String right("hello");
		bool result = left < right;

		// VERIFY
		assert(result == true);
		assert(left == String("he"));
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right[] = "he";
		bool result = left < right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == String("he"));
	}

	// testing string > string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right;
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right;
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right('x');
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right;
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right('x');
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('h');
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == 'h');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('h');
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'h');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('i');
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'i');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('a');
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello world");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello world");
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello world");
		assert(right == "hello");
	}

	// testing char > string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('x');
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('a');
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == 'a');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('x');
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('a');
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'a');
	}

	// testing char array > string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left[] = "he";
		String right("hello");
		bool result = left > right;

		// VERIFY
		assert(result == false);
		assert(left == String("he"));
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right[] = "he";
		bool result = left > right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == String("he"));
	}

	// testing string <= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right;
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right;
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right('x');
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right;
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right('x');
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('h');
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == 'h');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('h');
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'h');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('i');
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'i');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('a');
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello world");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello world");
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello world");
		assert(right == "hello");
	}

	// testing char <= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('x');
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('a');
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == 'a');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('x');
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('a');
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'a');
	}

	// testing char array <= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left[] = "he";
		String right("hello");
		bool result = left <= right;

		// VERIFY
		assert(result == true);
		assert(left == String("he"));
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right[] = "he";
		bool result = left <= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == String("he"));
	}

	// testing string >= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right;
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right;
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right('x');
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right;
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left;
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right('x');
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('x');
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left('h');
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == 'h');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('h');
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'h');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('i');
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'i');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right('a');
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		String right("hello world");
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello world");
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello world");
		assert(right == "hello");
	}

	// testing char >= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('x');
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left('a');
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == 'a');
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('x');
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right('a');
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'a');
	}

	// testing char array >= string
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		char left[] = "he";
		String right("hello");
		bool result = left >= right;

		// VERIFY
		assert(result == false);
		assert(left == String("he"));
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String left("hello");
		char right[] = "he";
		bool result = left >= right;

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == String("he"));
	}
	std::cout << "Done testing comparison functions." << std::endl;
}

