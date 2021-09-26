
// testing char constructor
// Jeremy Martin
#include "string.hpp"
#include <cassert> 
#include <iostream>

//===========================================================================
int main()
{

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test('x');

		// VERIFY
		assert(test == 'x');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test('\0');

		// VERIFY
		assert(test == '\0');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test(' ');

		// VERIFY
		assert(test == ' ');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test('a');

		// VERIFY
		assert(test == 'a');
	}

	std::cout << "Done testing char constructor." << std::endl;

}

