
// Jeremy Martin
// testing swap method

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
		stack<int>  x;
		stack<int>  y;

		// TEST
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;
		stack<int>  y;

		// TEST
		x.push(10);
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.top() == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;
		stack<int>  y;

		// TEST
		y.push(5);
		y.push(100);

		x.swap(y);

		// VERIFY
		assert(y.empty());
		assert(x.top() == 100);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;
		stack<int>  y;

		// TEST
		y.push(5);
		y.push(100);
		y.pop();
		x.push(20);
		x.push(30);

		y.swap(x);

		// VERIFY
		assert(x.top() == 5);
		int rlt = y.pop();
		assert(rlt == 30);
		assert(y.top() == 20);

	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;
		stack<int>  y;

		// TEST
		x.push(10);
		x.push(20);
		y.push(30);
		y.push(40);

		x.swap(y);

		// VERIFY
		int rlt1 = x.pop();
		assert(rlt1 == 40);
		assert(x.top() == 30);
		int rlt2 = y.pop();
		assert(rlt2 == 20);
		assert(y.top() == 10);
	}

	////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;
		stack<char>  y;

		// TEST
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;
		stack<char>  y;

		// TEST
		x.push('a');
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.top() == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;
		stack<char>  y;

		// TEST
		y.push('x');
		y.push('y');

		x.swap(y);

		// VERIFY
		assert(y.empty());
		assert(x.top() == 'y');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;
		stack<char>  y;

		// TEST
		y.push('x');
		y.push('y');
		y.pop();
		x.push('a');
		x.push('b');

		y.swap(x);

		// VERIFY
		assert(x.top() == 'x');
		char rlt = y.pop();
		assert(rlt == 'b');
		assert(y.top() == 'a');

	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;
		stack<char>  y;

		// TEST
		x.push('a');
		x.push('b');
		y.push('c');
		y.push('d');

		x.swap(y);

		// VERIFY
		char rlt1 = x.pop();
		assert(rlt1 == 'd');
		assert(x.top() == 'c');
		char rlt2 = y.pop();
		assert(rlt2 == 'b');
		assert(y.top() == 'a');
	}

	////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;
		stack<String>  y;

		// TEST
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;
		stack<String>  y;

		// TEST
		x.push("hello");
		x.swap(y);

		// VERIFY
		assert(x.empty());
		assert(y.top() == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;
		stack<String>  y;

		// TEST
		y.push("hi");
		y.push("test");

		x.swap(y);

		// VERIFY
		assert(y.empty());
		assert(x.top() == "test");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;
		stack<String>  y;

		// TEST
		y.push("hi");
		y.push("test");
		y.pop();
		x.push("hello");
		x.push("world");

		y.swap(x);

		// VERIFY
		assert(x.top() == "hi");
		String rlt = y.pop();
		assert(rlt == "world");
		assert(y.top() == "hello");

	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;
		stack<String>  y;

		// TEST
		x.push("hello");
		x.push("world");
		y.push("this");
		y.push("test");

		x.swap(y);

		// VERIFY
		String rlt1 = x.pop();
		assert(rlt1 == "test");
		assert(x.top() == "this");
		String rlt2 = y.pop();
		assert(rlt2 == "world");
		assert(y.top() == "hello");
	}
	std::cout << "Done testing swap method" << std::endl;
}
