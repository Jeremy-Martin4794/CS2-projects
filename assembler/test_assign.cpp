
// Jeremy Martin
// testing assignment method

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
		stack<int>  a;
		stack<int>  b;

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		stack<int>  b;
		b.push(10);

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		int tmp1 = a.pop();
		stack<int>  b;
		b.push(10);
		int tmp2 = b.pop();

		// TEST
		a = b;

		// VERIFY
		assert(tmp1 == 20);
		assert(tmp2 == 10);
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		a.push(20);
		a.push(20);
		a.push(20);
		stack<int>  b;
		b.push(10);

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		stack<int>  b;
		b.push(10);
		b.push(20);
		b.push(20);
		b.push(20);

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		stack<int>  b;
		b.push(10);
		stack<int>  c;
		c.push(5);

		// TEST
		a = b = c;

		// VERIFY
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		a.push(20);
		a.push(20);
		int tmp1 = a.pop();
		stack<int>  b;
		b.push(10);
		b.push(10);
		int tmp2 = b.pop();
		stack<int>  c;
		c.push(5);
		c.push(5);
		c.push(5);
		c.push(5);
		int tmp3 = c.pop();

		// TEST
		a = b = c;

		// VERIFY
		assert(tmp1 == 20);
		assert(tmp2 == 10);
		assert(tmp3 == 5);
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<int>  a;
		a.push(20);
		a.push(20);
		a.push(20);
		stack<int>  b;
		b.push(10);
		b.push(10);
		stack<int>  c;
		c.push(5);
		c.push(5);
		c.push(5);
		c.push(5);

		// TEST
		a = b = c;
		a = b;
		c = c;

		// VERIFY
		assert(a == b);
		assert(b == c);
		assert(c == c);
	}

	///////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		stack<char>  b;

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		stack<char>  b;
		b.push('b');

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		char tmp1 = a.pop();
		stack<char>  b;
		b.push('b');
		char tmp2 = b.pop();

		// TEST
		a = b;

		// VERIFY
		assert(tmp1 == 'a');
		assert(tmp2 == 'b');
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		a.push('a');
		a.push('a');
		a.push('a');
		stack<char>  b;
		b.push('b');

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		stack<char>  b;
		b.push('b');
		b.push('b');
		b.push('b');
		b.push('b');

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		stack<char>  b;
		b.push('b');
		stack<char>  c;
		c.push('c');

		// TEST
		a = b = c;

		// VERIFY
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		a.push('a');
		a.push('a');
		char tmp1 = a.pop();
		stack<char>  b;
		b.push('b');
		b.push('b');
		char tmp2 = b.pop();
		stack<char>  c;
		c.push('c');
		c.push('c');
		c.push('c');
		c.push('c');
		char tmp3 = c.pop();

		// TEST
		a = b = c;

		// VERIFY
		assert(tmp1 == 'a');
		assert(tmp2 == 'b');
		assert(tmp3 == 'c');
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<char>  a;
		a.push('a');
		a.push('a');
		a.push('a');
		stack<char>  b;
		b.push('b');
		b.push('b');
		stack<char>  c;
		c.push('c');
		c.push('c');
		c.push('c');
		c.push('c');

		// TEST
		a = b = c;
		a = b;
		c = c;

		// VERIFY
		assert(a == b);
		assert(b == c);
		assert(c == c);
	}

	///////////////////////////////////////////////////////////

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		stack<String>  b;

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		stack<String>  b;
		b.push("world");

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		String tmp1 = a.pop();
		stack<String>  b;
		b.push("world");
		String tmp2 = b.pop();

		// TEST
		a = b;

		// VERIFY
		assert(tmp1 == "hello");
		assert(tmp2 == "world");
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		a.push("hello");
		a.push("hello");
		a.push("hello");
		stack<String>  b;
		b.push("world");

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		stack<String>  b;
		b.push("world");
		b.push("world");
		b.push("world");
		b.push("world");

		// TEST
		a = b;

		// VERIFY
		assert(a == b);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		stack<String>  b;
		b.push("world");
		stack<String>  c;
		c.push("test");

		// TEST
		a = b = c;

		// VERIFY
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		a.push("hello");
		a.push("hello");
		String tmp1 = a.pop();
		stack<String>  b;
		b.push("world");
		b.push("world");
		String tmp2 = b.pop();
		stack<String>  c;
		c.push("test");
		c.push("test");
		c.push("test");
		c.push("test");
		String tmp3 = c.pop();

		// TEST
		a = b = c;

		// VERIFY
		assert(tmp1 == "hello");
		assert(tmp2 == "world");
		assert(tmp3 == "test");
		assert(a == c);
		assert(b == c);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		stack<String>  a;
		a.push("hello");
		a.push("hello");
		a.push("hello");
		stack<String>  b;
		b.push("world");
		b.push("world");
		stack<String>  c;
		c.push("test");
		c.push("test");
		c.push("test");
		c.push("test");

		// TEST
		a = b = c;
		a = b;
		c = c;

		// VERIFY
		assert(a == b);
		assert(b == c);
		assert(c == c);
	}

	std::cout << "Done testing assignment method" << std::endl;
}

