// Jeremy Martin
// 10/29/2020
// recursive fibonnacci functions

#include<iostream>

int fibonnacci(int val) {
	if (val <= 1) {
		return val;
	}
	return fibonnacci(val - 1) + fibonnacci(val - 2);
}

int fibonnacciTail(int val, int a = 0, int b = 1) {
	if (val == 0) return a;
	if (val == 1) return b;
	return fibonnacciTail((val - 1), b, a+b);
}

void fibSequence(int num) {
	for (int i = 0; i <= num; ++i) {
		std::cout << fibonnacci(i) << ' ';
	}
}

void fibTailSequence(int num) {
	for (int i = 0; i <= num; ++i) {
		std::cout << fibonnacciTail(i) << ' ';
	}
}

int main() {

	fibSequence(10);
	std::cout << std::endl;
	fibTailSequence(10);

}