
// bigint overload+ tests
// 9/20/20
// Jeremy Martin
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main() {
	
	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(0);
		bigint right(0);
		bigint result;

		// Test 
		result = left + right;

		// Verify
		assert(left == 0);
		assert(right == 0);
		assert(result == 0);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(1);
		bigint right(0);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 1);
		assert(right == 0);
		assert(result == 1);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(0);
		bigint right(1);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 0);
		assert(right == 1);
		assert(result == 1);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(1);
		bigint right(1);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 1);
		assert(right == 1);
		assert(result == 2);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(0);
		bigint right(10);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 0);
		assert(right == 10);
		assert(result == 10);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(10);
		bigint right(0);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 10);
		assert(right == 0);
		assert(result == 10);
	}
	
	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(95);
		bigint right(3);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 95);
		assert(right == 3);
		assert(result == 98);
	}
	
	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(95);
		bigint right(6);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 95);
		assert(right == 6);
		assert(result == 101);
	}
	
	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(74);
		bigint right(300);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 74);
		assert(right == 300);
		assert(result == 374);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(74);
		bigint right(990);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 74);
		assert(right == 990);
		assert(result == 1064);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(20);
		bigint right(34);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 20);
		assert(right == 34);
		assert(result == 54);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(20);
		bigint right(80);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 20);
		assert(right == 80);
		assert(result == 100);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(970);
		bigint right(20);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 970);
		assert(right == 20);
		assert(result == 990);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(970);
		bigint right(34);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 970);
		assert(right == 34);
		assert(result == 1004);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(234);
		bigint right(5000);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 234);
		assert(right == 5000);
		assert(result == 5234);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(234);
		bigint right(9800);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 234);
		assert(right == 9800);
		assert(result == 10034);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(123);
		bigint right(400);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 123);
		assert(right == 400);
		assert(result == 523);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(123);
		bigint right(900);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 123);
		assert(right == 900);
		assert(result == 1023);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(73569246);
		bigint right(328946);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 73569246);
		assert(right == 328946);
		assert(result == 73898192);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(99999);
		bigint right(9999);
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == 99999);
		assert(right == 9999);
		assert(result == 109998);
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left("9999999999999999999");
		bigint right("1");
		bigint result;

		// Test
		result = left + right;

		// Verify
		assert(left == "9999999999999999999");
		assert(right == "1");
		assert(result == "10000000000000000000");
	}

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left("1");
		bigint right("999999999999999999999999999999999999999998");
		bigint result;

		// Test 
		result = left + right;

		// Verify
		assert(left == "1");
		assert(right == "999999999999999999999999999999999999999998");
		assert(result == "999999999999999999999999999999999999999999");
	}
	
	std::cout << "Done with testing addition." << std::endl;
}
