
// Jeremy Martin
// testing copy constructor

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//===========================================================================
int main()
{
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		stack<int>  y(x);

		// VERIFY
		assert(y.empty());
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		x.push(10);
		stack<int>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 10);
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		x.push(10);
		x.push(20);
		x.push(30);
		x.push(40);
		stack<int>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 40);
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		x.push(10);
		x.push(20);
		x.pop();
		stack<int>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 10);
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		x.push(10);
		stack<int>  y(x);
		y.push(20);
		stack<int>  z(y);

		// VERIFY
		assert(z.empty() == false);
		assert(z.top() == 20);
		assert(y == z);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  x;
		x.push(10);
		stack<int>  y(x);
		y.push(20);
		y.pop();

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 10);
		assert(x == y);
	}

	/////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		stack<char>  y(x);

		// VERIFY
		assert(y.empty());
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		x.push('a');
		stack<char>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 'a');
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		x.push('a');
		x.push('b');
		x.push('c');
		x.push('d');
		stack<char>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 'd');
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		x.push('a');
		x.push('b');
		x.pop();
		stack<char>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 'a');
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		x.push('a');
		stack<char>  y(x);
		y.push('b');
		stack<char>  z(y);

		// VERIFY
		assert(z.empty() == false);
		assert(z.top() == 'b');
		assert(y == z);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  x;
		x.push('a');
		stack<char>  y(x);
		y.push('b');
		y.pop();

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == 'a');
		assert(x == y);
	}

	/////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		stack<String>  y(x);

		// VERIFY
		assert(y.empty());
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		x.push("hello");
		stack<String>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == "hello");
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		x.push("hello");
		x.push("world");
		x.push("this");
		x.push("test");
		stack<String>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == "test");
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		x.push("hello");
		x.push("world");
		x.pop();
		stack<String>  y(x);

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == "hello");
		assert(x == y);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		x.push("hello");
		stack<String>  y(x);
		y.push("world");
		stack<String>  z(y);

		// VERIFY
		assert(z.empty() == false);
		assert(z.top() == "world");
		assert(y == z);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  x;
		x.push("hello");
		stack<String>  y(x);
		y.push("world");
		y.pop();

		// VERIFY
		assert(y.empty() == false);
		assert(y.top() == "hello");
		assert(x == y);
	}

	std::cout << "Done testing copy constructor" << std::endl;

}
