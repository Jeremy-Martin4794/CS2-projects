
// bigint Test subscript
// 9/20/2020
// Jeremy Martin
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main() {
	
	{
		// Setup
		bigint bi(0);

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 0);
		assert(digit == 0);
	
	}

	{
		// Setup
		bigint bi(1);

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 1);
		assert(digit == 1);

	}

	{
		// Setup
		bigint bi(4);

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 4);
		assert(digit == 4);

	}

	{
		// Setup
		bigint bi(72);

		// Test 
		int digit = bi[1];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 72);
		assert(digit == 2);

	}

	{
		// Setup
		bigint bi(826);

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 826);
		assert(digit == 8);

	}

	{
		// Setup
		bigint bi(826);

		// Test 
		int digit = bi[2];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 826);
		assert(digit == 6);

	}
	
	{
		// Setup
		bigint bi(12345);

		// Test 
		int digit = bi[2];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 12345);
		assert(digit == 3);

	}

	{
		// Setup
		bigint bi(123456789);

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 123456789);
		assert(digit == 1);

	}

	{
		// Setup
		bigint bi(123456789);

		// Test 
		int digit = bi[4];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 123456789);
		assert(digit == 5);

	}

	{
		// Setup
		bigint bi(123456789);

		// Test 
		int digit = bi[8];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == 123456789);
		assert(digit == 9);

	}

	{
		// Setup
		bigint bi("0");

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "0");
		assert(digit == 0);

	}

	{
		// Setup
		bigint bi("1");

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "1");
		assert(digit == 1);

	}

	{
		// Setup
		bigint bi("345");

		// Test 
		int digit = bi[1];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "345");
		assert(digit == 4);

	}

	{
		// Setup
		bigint bi("8932438294");

		// Test 
		int digit = bi[9];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "8932438294");
		assert(digit == 4);

	}

	{
		// Setup
		bigint bi("123456789");

		// Test 
		int digit = bi[0];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "123456789");
		assert(digit == 1);

	}

	{
		// Setup
		bigint bi("123456789");

		// Test 
		int digit = bi[5];
		std::cout << digit;
		std::cout << std::endl;

		// Verify
		assert(bi == "123456789");
		assert(digit == 6);

	}
	std::cout << "Done testing subscript." << std::endl;
}



