
// bigint Test times10 function
// 9/26/2020
// Jeremy Martin
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main() {
	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(3);

		// Test 
		bi = bi.times10(0);

		// Verify
		assert(bi == 3); 
	}
	
	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(0);

		// Test 
		bigint result = bi.times10(3);

		// Verify
		assert(bi == 0);
		assert(result == 0);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Test: Construct with 0
		// Setup fixture
		bigint bi(1);

		// Test 
		bigint result = bi.times10(3);

		// Verify
		assert(bi == 1);
		assert(result == 1000);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(5768);

		// Test 
		bigint result = bi.times10(3);

		// Verify
		assert(bi == 5768);
		assert(result == 5768000);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi("99");

		// Test 
		bigint result = bi.times10(10);

		// Verify
		assert(bi == "99");
		assert(result == "990000000000");
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi("34895345236986332904743285");

		// Test 
		bigint result = bi.times10(5);

		// Verify
		assert(bi == "34895345236986332904743285");
		assert(result == "3489534523698633290474328500000");
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	std::cout << "Done testing times_10" << std::endl;
}


