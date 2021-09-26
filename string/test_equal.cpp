
// testing equal to and not equal to operators
// Jeremy Martin
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	//testing == operator
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right;

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('\0');
		String  right('\0');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == '\0');
		assert(right == '\0');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("");
		String  right("");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right('x');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('x');
		String  right;

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right("hello");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("hello");
		String  right;

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('x');
		String  right('x');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('x');
		String  right('z');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == 'z');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left(' ');
		String  right(' ');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == ' ');
		assert(right == ' ');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello World!");
		String  right("Hello World!");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "Hello World!");
		assert(right == "Hello World!");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello World!");
		String  right(" Hello ");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "Hello World!");
		assert(right == " Hello ");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("aaaaabbbbbbcccc");
		String  right("aaaaabbbbbbcccc");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "aaaaabbbbbbcccc");
		assert(right == "aaaaabbbbbbcccc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("xaaaaabbbbbbcccc");
		String  right("aaaaabbbbbbcccc");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "xaaaaabbbbbbcccc");
		assert(right == "aaaaabbbbbbcccc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("aaaaabbbbbbccccx");
		String  right("aaaaabbbbbbcccc");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "aaaaabbbbbbccccx");
		assert(right == "aaaaabbbbbbcccc");
	}

	// testing != operator
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right;

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('\0');
		String  right('\0');

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == '\0');
		assert(right == '\0');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("");
		String  right("");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("");
		String  right("abc");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "abc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right('x');

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('x');
		String  right;

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left;
		String  right("hello");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("hello");
		String  right;

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("xabc");
		String  right("abc");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "xabc");
		assert(right == "abc");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("zzzzzg");
		String  right("zzzzzd");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "zzzzzg");
		assert(right == "zzzzzd");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello world!");
		String  right("Hello world!");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == "Hello world!");
		assert(right == "Hello world!");
	}

	// char == tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		char right('x');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left('x');
		String  right("Hello");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == 'x');
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left(' ');
		String  right("Hello");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == ' ');
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left('d');
		String  right("d");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == 'd');
		assert(right == "d");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("hello");
		char  right('d');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "hello");
		assert(right == 'd');
	}

	// char array == tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		char right[] = "";

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == String(""));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = { "Hello" };
		String  right("Hello");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == String("Hello"));
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = { "Hello" };
		String  right("Hello world");

		// TEST
		bool result = (right == left);

		// VERIFY
		assert(result == false);
		assert(left == String("Hello"));
		assert(right == "Hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("Hello");
		char right[] = "Hello";

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(left == "Hello");
		assert(right == String("Hello"));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("Hello");
		char right[] = "";

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(left == "Hello");
		assert(right == String(""));
	}

	// char != tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		char right('x');

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "");
		assert(right == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left('x');
		String  right("Hello");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == 'x');
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left(' ');
		String  right("Hello");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == ' ');
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char  left('d');
		String  right("d");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == 'd');
		assert(right == "d");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("hello");
		char  right('d');

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "hello");
		assert(right == 'd');
	}

	// char array != tests
	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left;
		char right[] = "";

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == "");
		assert(right == String(""));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = { "Hello" };
		String  right("Hello");

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == String("Hello"));
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		char left[] = { "Hello" };
		String  right("Hello world");

		// TEST
		bool result = (right != left);

		// VERIFY
		assert(result == true);
		assert(left == String("Hello"));
		assert(right == "Hello world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("Hello");
		char right[] = "Hello";

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == false);
		assert(left == "Hello");
		assert(right == String("Hello"));
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String left("Hello");
		char right[] = "";

		// TEST
		bool result = (left != right);

		// VERIFY
		assert(result == true);
		assert(left == "Hello");
		assert(right == String(""));
	}

	
	std::cout << "Done testing equal to and not equal to operators" << std::endl;
}
  



