// Jeremy Martin
// converting infix to prefix for lab assignment
// 11/13/2020

#include<iostream>
#include<fstream>
#include"string.hpp"
#include"string.cpp"
#include"stack.hpp"

stack<String> infixToPrefix(String);

stack<String> infixToPrefix(String str) {
	stack<String> x;
	std::vector<String> rlt = str.split(' ');
	int i = 0;
	while (rlt[i] != ";") {
		if (rlt[i] == ")") {
			String right = x.pop();
			String op = x.pop();
			String left = x.pop();
			x.push(op + ' ' + left + ' ' + right);
		}
		else if (rlt[i] != "(") {
			x.push(rlt[i]);
		}
		++i;
	}
	return x;
}

int main() {
    std::ifstream in("data3-1.txt");
		if (!in.is_open()) {
			std::cout << "Could not open file\n";
			return 1;
		}
    String temp;
		while (!in.eof()) {
			char c;
			if (in.get(c).fail()) break;
			if (c == ';') {
				std::cout << "infix: ";
				for (int i = 0; temp[i] != '\0'; ++i) {
					if (temp[i] == '\n' || temp[i] == '\r') continue;
					std::cout << temp[i];
				}
				std::cout << std::endl;
				temp = temp + c;
				stack<String> prefix = infixToPrefix(temp);
				std::cout << "prefix: " << prefix.top();
				std::cout << std::endl;
				temp = String();
				std::cout << std::endl;
			}
			else temp = temp + c;
		}
    in.close();
}
