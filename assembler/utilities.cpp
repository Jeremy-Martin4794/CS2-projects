// Jeremy Martin
// 11/14/2020
// function definitions for infix and postfix

#include<iostream>
#include"stack.hpp"

stack<String> infixToPostfix(String str) {
	stack<String> x;
	std::vector<String> rlt = str.split(' ');
	int i = 0;
	while (rlt[i] != ";") {
		if (rlt[i] == ")") {
			String right = x.pop();
			String op = x.pop();
			String left = x.pop();
			x.push(left + ' ' + right + ' ' + op);
		}
		else if (rlt[i] != "(") {
			x.push(rlt[i]);
		}
		++i;
	}
	return x;
}

String evaluate(String left, String op, String right, std::ostream& out, int index) {
	String tempn("TMP");
	out << "   LD    " << left << '\n';
	if (op == "+") out << "   AD    " << right << '\n';
	else if (op == "-") out << "   SB    " << right << '\n';
	else if (op == "*") out << "   MU    " << right << '\n';
	else if (op == "/") out << "   DV    " << right << '\n';
	char c = index + '0';
	tempn = tempn + c;
	out << "   ST    " << tempn << '\n';
	return tempn;
}

stack<String> evaluate(String str, std::ostream& out) {
	stack<String> x;
	int index = 1;
	std::vector<String> rlt = str.split(' ');
	for (int i = 0; i != (int)rlt.size(); ++i) {
		if (rlt[i] != "+" && rlt[i] != "-" && rlt[i] != "*" && rlt[i] != "/") {
			x.push(rlt[i]);
		}
		else {
			String right = x.pop();
			String left = x.pop();
			x.push(evaluate(left, rlt[i], right, out, index));
			++index;
		}
	}
	return x;
}

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

stack<String> evaluatePrefix(String str, std::ostream& out) {
	stack<String> x;
	int index = 1;
	std::vector<String> rlt = str.split(' ');
	for (int i = (int)rlt.size()-1; i != -1; --i) {
		if (rlt[i] != "+" && rlt[i] != "-" && rlt[i] != "*" && rlt[i] != "/") {
			x.push(rlt[i]);
		}
		else {
			String left = x.pop();
			String right = x.pop();
			x.push(evaluate(left, rlt[i], right, out, index));
			++index;
		}
	}
	return x;
}
