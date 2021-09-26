
// testing + operators
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	// += operator tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right;

		// TEST
		left += right;

		// VERIFY
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right('r');

		// TEST
		left += right;

		// VERIFY
		assert(left == "r");
		assert(right == "r");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('l');
		String right;

		// TEST
		left += right;

		// VERIFY
		assert(left == "l");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("hello");
		String right;

		// TEST
		left += right;

		// VERIFY
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right("world");

		// TEST
		left += right;

		// VERIFY
		assert(left == "world");
		assert(right == "world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('x');
		String right('x');

		// TEST
		left += right;

		// VERIFY
		assert(left == "xx");
		assert(right == "x");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("abcdefghijklmnopqrstuvwxyz");
		String right("abcdefghijklmnopqrstuvwxyz");

		// TEST
		left += right;

		// VERIFY
		assert(left == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
		assert(right == "abcdefghijklmnopqrstuvwxyz");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("hello ");
		String right("world");

		// TEST
		left += right;

		// VERIFY
		assert(left == "hello world");
		assert(right == "world");
	}

	// plus operator tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right;

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "");
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('l');
		String right;

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "l");
		assert(left == 'l');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right('r');

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "r");
		assert(left == "");
		assert(right == 'r');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("hello");
		String right;

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "hello");
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		String right("world");

		// TEST
		String result = (left + right);

			// VERIFY
		assert(result == "world");
		assert(left == "");
		assert(right == "world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("abc");
		String right("xyz");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "abcxyz");
		assert(left == "abc");
		assert(right == "xyz");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("hello ");
		String right("world");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "hello world");
		assert(left == "hello ");
		assert(right == "world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("abcdefghijklmnopqrstuvwxyz");
		String right("abcdefghijklmnopqrstuvwxyz");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
		assert(left == "abcdefghijklmnopqrstuvwxyz");
		assert(right == "abcdefghijklmnopqrstuvwxyz");
	}

	// testing char +
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		char right = '\0';

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "");
		assert(left == "");
		assert(right == '\0');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('x');
		char right = 'x';

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "xx");
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("hello");
		char right('x');

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "hellox");
		assert(left == "hello");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left('x');
		String right;

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "x");
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left('x');
		String right('x');

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "xx");
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left('x');
		String right("hello");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "xhello");
		assert(left == 'x');
		assert(right == "hello");
	}

	// char array + tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('x');
		char right[] = "";

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == 'x');
		assert(left == 'x');
		assert(right == String(""));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left('x');
		char right[] = "hello";

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "xhello");
		assert(left == 'x');
		assert(right == String("hello"));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = "hello";
		String right('x');

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "hellox");
		assert(left == String("hello"));
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = "hello";
		String right;

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "hello");
		assert(left == String("hello"));
		assert(right == "");
	}

	std::cout << "Done testing plus operators" << std::endl;
}
 
