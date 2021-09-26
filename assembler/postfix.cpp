
// Jeremy Martin
// 11/13/2020
// main outputs from an input file to command line or output file

#include <iostream>
#include<fstream>
#include"utilities.hpp"

int main(int argc, char* argv[]) {

	if (argc < 2) { std::cout << "invalid input arguments"; return 0; }
	std::ifstream in(argv[1]);
	if (!in.is_open()) {
		std::cout << "Could not open file\n";
		return 1;
	}
	
	if (argc == 3) {
		std::ofstream out(argv[2]);
		if (!out.is_open()) {
			std::cout << "Could not open file\n";
			return 1;
		}

		String temp;
		while (!in.eof()) {
			char c;
			if (in.get(c).fail()) break;
			if (c == ';') {
				out << "infix: ";
				for (int i = 0; temp[i] != '\0'; ++i) {
					if (temp[i] == '\n' || temp[i] == '\r') continue;
					out << temp[i];
				}
				out << std::endl;
				temp = temp + c;
				stack<String> postfix = infixToPostfix(temp);
				out << "postfix: " << postfix.top();
				out << std::endl;
				temp = String();
				out << std::endl;
			}
			else temp = temp + c;
		}
		out.close();
	}
	else {
		String temp;
		while (!in.eof()) {
			char c;
			if(in.get(c).fail()) break;
			if (c == ';') {
				std::cout << "infix: ";
				for (int i = 0; temp[i] != '\0'; ++i) {
					if (temp[i] == '\n' || temp[i] == '\r') continue;
					std::cout << temp[i];
				}
				std::cout << std::endl;
				temp = temp + c;
				stack<String> postfix = infixToPostfix(temp);
				std::cout << "postfix: " << postfix.top();
				std::cout << std::endl;
				temp = String();
				std::cout << std::endl;
			}
			else temp = temp + c;
		}
	}

	in.close();
	return 0;
}
 