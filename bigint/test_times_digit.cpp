
// bigint Test timesDigit function
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
		bigint result = bi.timesDigit(1);

		// Verify
		assert(bi == 3);
		assert(result == 3);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(234);

		// Test 
		bigint result = bi.timesDigit(0);

		// Verify
		assert(bi == 234);
		assert(result == 0);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(0);

		// Test 
		bigint result = bi.timesDigit(0);

		// Verify
		assert(bi == 0);
		assert(result == 0);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(1);

		// Test 
		bigint result = bi.timesDigit(1);

		// Verify
		assert(bi == 1);
		assert(result == 1);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(234);

		// Test 
		bigint result = bi.timesDigit(1);

		// Verify
		assert(bi == 234);
		assert(result == 234);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(9999);

		// Test 
		bigint result = bi.timesDigit(4);

		// Verify
		assert(bi == 9999);
		assert(result == 39996);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi(123456789);

		// Test 
		bigint result = bi.timesDigit(4);

		// Verify
		assert(bi == 123456789);
		assert(result == 493827156);
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi("57894");

		// Test 
		bigint result = bi.timesDigit(3);

		// Verify
		assert(bi == "57894");
		assert(result == "173682");
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint bi("328914389143298463281945493210509438530935893");

		// Test 
		bigint result = bi.timesDigit(5);

		// Verify
		assert(bi == "328914389143298463281945493210509438530935893");
		assert(result == "1644571945716492316409727466052547192654679465");
		std::cout << bi << std::endl;
		std::cout << result << std::endl;;
	}

	std::cout << "Done testing bigint * digit" << std::endl;
}

