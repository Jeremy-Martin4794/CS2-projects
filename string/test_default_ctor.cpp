
// testing default constructor
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
		String test;

		// VERIFY
		assert(test == '\0');
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String test;

		// VERIFY
		assert(test == "");
	}

	std::cout << "Done testing default constructor." << std::endl;

}

