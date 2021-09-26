// Jeremy Martin
// 11/14/2020
// utilities header file

#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_

#include<iostream>
#include"stack.hpp"

stack<String> infixToPostfix(String);
stack<String> evaluate(String, std::ostream&);
String evaluate(String, String, String, std::ostream&, int);

stack<String> infixToPrefix(String);
stack<String> evaluatePrefix(String, std::ostream&);

#endif