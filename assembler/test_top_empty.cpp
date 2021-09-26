
// Jeremy Martin
// testing top and empty methods

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
		

		// VERIFY
		assert(x.empty());
		x.push(10);
		assert(x.top() == 10);
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
		assert(x.top() == 20);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  x;

		// TEST
		x.push(10);
		x.push(20);
		x.pop();


		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 10);
		x.pop();
		assert(x.empty());
	}

	///////////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST


		// VERIFY
		assert(x.empty());
		x.push('a');
		assert(x.top() == 'a');
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
		assert(x.top() == 'b');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  x;

		// TEST
		x.push('a');
		x.push('b');
		x.pop();


		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == 'a');
		x.pop();
		assert(x.empty());
	}

	///////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST


		// VERIFY
		assert(x.empty());
		x.push("hello");
		assert(x.top() == "hello");
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
		assert(x.top() == "world");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  x;

		// TEST
		x.push("hello");
		x.push("world");
		x.pop();


		// VERIFY
		assert(x.empty() == false);
		assert(x.top() == "hello");
		x.pop();
		assert(x.empty());
	}

	std::cout << "Done testing top and empty methods" << std::endl;
}
