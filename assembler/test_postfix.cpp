
// Jeremy Martin
// testing postfix function

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"
#include"utilities.hpp"
#include"utilities.cpp"

//===========================================================================
int main()
{
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( A + B ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( A + B ) ;");
		assert(stack.top() == "A B +");
		assert(rlt == "A B +");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( C - D ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( C - D ) ;");
		assert(stack.top() == "C D -");
		assert(rlt == "C D -");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( E * F ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( E * F ) ;");
		assert(stack.top() == "E F *");
		assert(rlt == "E F *");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( G / H ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( G / H ) ;");
		assert(stack.top() == "G H /");
		assert(rlt == "G H /");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ABCDEF + ABCDEF ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ABCDEF + ABCDEF ) ;");
		assert(stack.top() == "ABCDEF ABCDEF +");
		assert(rlt == "ABCDEF ABCDEF +");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ( AB + C ) * D ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ( AB + C ) * D ) ;");
		assert(stack.top() == "AB C + D *");
		assert(rlt == "AB C + D *");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ( ( AB / CD ) * EF ) + ( GH - IJ ) ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ( ( AB / CD ) * EF ) + ( GH - IJ ) ) ;");
		assert(stack.top() == "AB CD / EF * GH IJ - +");
		assert(rlt == "AB CD / EF * GH IJ - +");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ( ( ( AB + C ) * D ) / EF ) - G ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ( ( ( AB + C ) * D ) / EF ) - G ) ;");
		assert(stack.top() == "AB C + D * EF / G -");
		assert(rlt == "AB C + D * EF / G -");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ( ( A + B ) * ( C - D ) ) / ( E * F ) ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ( ( A + B ) * ( C - D ) ) / ( E * F ) ) ;");
		assert(stack.top() == "A B + C D - * E F * /");
		assert(rlt == "A B + C D - * E F * /");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test("( ( ( ABC - DEF ) + GHI ) / ( JKL * MNO ) ) ;");
		stack<String> stack = infixToPostfix(test);
		String rlt = stack.top();

		// VERIFY
		assert(test == "( ( ( ABC - DEF ) + GHI ) / ( JKL * MNO ) ) ;");
		assert(stack.top() == "ABC DEF - GHI + JKL MNO * /");
		assert(rlt == "ABC DEF - GHI + JKL MNO * /");
	}

	std::cout << "Done testing postfix function" << std::endl;

}
