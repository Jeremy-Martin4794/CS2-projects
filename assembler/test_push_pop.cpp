
// Jeremy Martin
// testing push and pop methods

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

		// TEST
		x.push(0);

		// VERIFY
		assert(x.empty() == false);
		int rlt = x.pop();
		assert(rlt == 0);
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push(10);
		x.push(20);

		// VERIFY
		assert(x.empty() == false);
		int rlt = x.pop();
		assert(rlt == 20);
		assert(x.empty() == false);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push(10);
		x.push(20);
		x.push(30);
		x.push(40);
		x.pop();
		x.pop();
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		int rlt = x.pop();
		assert(rlt == 10);
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push(10);

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push(10);
		x.push(20);
		x.push(30);
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 20);
	}

	/////////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST
		x.push('a');

		// VERIFY
		assert(x.empty() == false);
		char rlt = x.pop();
		assert(rlt == 'a');
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST
		x.push('a');
		x.push('b');

		// VERIFY
		assert(x.empty() == false);
		char rlt = x.pop();
		assert(rlt == 'b');
		assert(x.empty() == false);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push('a');
		x.push('b');
		x.push('c');
		x.push('d');
		x.pop();
		x.pop();
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		char rlt = x.pop();
		assert(rlt == 'a');
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST
		x.push('a');

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST
		x.push('a');
		x.push('b');
		x.push('c');
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 'b');
	}

	/////////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");

		// VERIFY
		assert(x.empty() == false);
		String rlt = x.pop();
		assert(rlt == "hello");
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");
		x.push("world");

		// VERIFY
		assert(x.empty() == false);
		String rlt = x.pop();
		assert(rlt == "world");
		assert(x.empty() == false);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");
		x.push("world");
		x.push("test");
		x.push("test2");
		x.pop();
		x.pop();
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		String rlt = x.pop();
		assert(rlt == "hello");
		assert(x.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");
		x.push("world");
		x.push("test");
		x.pop();

		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == "world");
	}

	std::cout << "Done testing push and pop methods" << std::endl;
}
