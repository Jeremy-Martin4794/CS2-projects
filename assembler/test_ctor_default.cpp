
// Jeremy Martin
// testing default constructor

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
		stack<int>  a;
		stack<int>  b;

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  a;
		a.push(10);
		stack<int>  b;
		b.push(10);

		// VERIFY
		assert(a == b);
		assert(a.empty() == false);
		assert(b.empty() == false);
		assert(a.top() == 10);
		assert(b.top() == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  a;
		a.push(10);
		a.pop();
		stack<int>  b;
		b.push(10);
		b.pop();

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<int>  a;
		a.push(10);
		a.pop();
		stack<int>  b;
		b.push(10);

		// VERIFY
		assert(!(a == b));
		assert(a.empty());
		assert(b.empty() == false);
		assert(b.top() == 10);
	}

	///////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  a;
		stack<char>  b;

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  a;
		a.push('a');
		stack<char>  b;
		b.push('a');

		// VERIFY
		assert(a == b);
		assert(a.empty() == false);
		assert(b.empty() == false);
		assert(a.top() == 'a');
		assert(b.top() == 'a');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  a;
		a.push('a');
		a.pop();
		stack<char>  b;
		b.push('a');
		b.pop();

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<char>  a;
		a.push('a');
		a.pop();
		stack<char>  b;
		b.push('a');

		// VERIFY
		assert(!(a == b));
		assert(a.empty());
		assert(b.empty() == false);
		assert(b.top() == 'a');
	}
	
	///////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  a;
		stack<String>  b;

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  a;
		a.push("test");
		stack<String>  b;
		b.push("test");

		// VERIFY
		assert(a == b);
		assert(a.empty() == false);
		assert(b.empty() == false);
		assert(a.top() == "test");
		assert(a.top() == "test");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  a;
		a.push("test");
		a.pop();
		stack<String>  b;
		b.push("test");
		b.pop();

		// VERIFY
		assert(a == b);
		assert(a.empty());
		assert(b.empty());
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		stack<String>  a;
		a.push("test");
		a.pop();
		stack<String>  b;
		b.push("test");

		// VERIFY
		assert(!(a == b));
		assert(a.empty());
		assert(b.empty() == false);
		assert(b.top() == "test");
	}

	std::cout << "Done testing default constructor" << std::endl;

}
