// Jeremy Martin
// Project 3 stack interface header file
// 11/1/2020

#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    10/2019
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include <iostream>
#include "string.hpp"
#include<cassert>

////////////////////////////////////////////////////////////////////////////
//
template<typename T>
class Node {
public:
	T data;
	Node* next;
	Node() { next = 0; }
	Node(T value) { data = value; next = 0; }
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//
template <typename T>
class stack {
public:
	stack() { tos = 0; length = 0; }
	stack(const stack<T>&);
	~stack();
	void swap(stack<T>&);
	stack<T>& operator=(stack<T>);
	bool operator==(const stack<T>) const;
	bool empty() const { return tos == 0; }
	bool full() const;
	T top() const { assert(tos != 0); return tos->data; }
	T pop();
	void push(const T&);

private:
	Node<T>* tos;
	int length;
};

/////////////////////////////////////////////////////////////////////////////
//foo->bar() is the same as (*foo).bar()

template <typename T>
stack<T>::stack(const stack<T>& org) {
	tos = 0;
	length = 0;
	Node<T>* orgTos = org.tos;
	Node<T>* middle = 0;
	Node<T>* bottom = 0;
	while (orgTos != 0) {
		bottom = new Node<T>(orgTos->data);
		if (tos == 0) tos = bottom;
		if (middle == 0) middle = tos;
		if (middle != bottom) middle->next = bottom;
		middle = middle->next;
		orgTos = orgTos->next;
		++length;
	}
}

template <typename T>
stack<T>::~stack() {
	Node<T>* temp;
	while (tos != 0) {
		temp = tos;
		tos = tos->next;
		delete temp;
	}
}

template <typename T>
void stack<T>::swap(stack<T>& tos2) {
	int len = length;
	length = tos2.length;
	tos2.length = len;
	
	Node<T>* temp = tos;
	tos = tos2.tos;
	tos2.tos = temp;
}

template <typename T>
stack<T>& stack<T>::operator=(stack<T> rhs) {
	Node<T>* rhsTos = rhs.tos;
	Node<T>* del;
	Node<T>* middle = 0;
	Node<T>* bottom = 0;
	if (this != &rhs) {
		length = rhs.length;
		while (tos != 0) {
			del = tos;
			tos = tos->next;
			if (del != 0)
				delete del;
		}
		while (rhsTos != 0) {
			bottom = new Node<T>(rhsTos->data);
			if (tos == 0) tos = bottom;
			if (middle == 0) middle = tos;
			if (middle != bottom) middle->next = bottom;
			middle = middle->next;
			rhsTos = rhsTos->next;
		}
	}
	return *this;
}

template <typename T>
bool stack<T>::operator==(const stack<T> rhs) const {
	int found = 0;
	Node<T>* temp1 = tos;
	Node<T>* temp2 = rhs.tos;
	if (length == rhs.length) {
		if ((temp1 == 0) && (temp2 == 0)) return true;
		while ((temp1 != 0) && (temp2 != 0)) {
			if (temp1->data != temp2->data)
				found = -1;
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		if (found == 0)
			return true;
	}
	return false;
}

template <typename T>
bool stack<T>::full() const {
	Node<T>* temp = new Node<T>;
	if (temp == 0)
		return true;
	delete temp;
	return false;
}

template <typename T>
T stack<T>::pop() {
	--length;
	Node<T>* temp = tos;
	tos = tos->next;
	T value = temp->data;
	if (temp != 0)
		delete temp;
	return value;
}

template <typename T>
void stack<T>::push(const T& value) {
	++length;
	Node<T>* newNode = new Node<T>(value);
	newNode->next = tos;
	tos = newNode;
}
#endif





