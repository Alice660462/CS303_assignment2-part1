#include "SingleLinkedList.h"
#include <iostream>
#include<cmath>
#include<string>
using namespace std;

// this fucntion take one paramter the data you want to add to the front
// there are two caese, one is when the list is empty, one is when it's not.
template <typename T>
void SingleLinkedList<T>::push_front(T& item) {
	Node<T>* newNode = new Node<T>(item);
	newNode->next = head;
	head = newNode;
	if (tail == nullptr) {
		tail = newNode;

	}num_items++;
};

//this fuction takes one parameter, the item you want to add to the end of the
//list. 
template <typename T>
void SingleLinkedList<T>::push_back(T& item) {
	Node<T>* newNode = new Node<T>(item);
	tail->next = newNode;
	tail = newNode;
	if (head == nullptr) {
		head = newNode;
	}
	num_items++;

};

// this fucntion takes no parameter, it removes the first element in the list.
//if the list is empty, throw an error.
template <typename T>
void SingleLinkedList<T>::pop_front() {
	if (head != nullptr) {
		head = head->next;
		num_items--;
	}
	else {
		throw runtime_error("There's nothing to remove.");
	}
};

// this function takes no parameters, removes the last element
//  of the list. throw an error if the list is empty.
template <typename T>
void SingleLinkedList<T>::pop_back() {
	if (head != nullptr) {
		Node<T>* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		tail = temp;
		temp->next = nullptr;
		num_items--;
	}
	else {
		throw runtime_error("There's nothing to remove.");
	}
};

// this function takes no parameters, returns the first element of the list,
// throw an error if the list is empty.
template <typename T>
T& SingleLinkedList<T>::front() {
	if (num_items != 0) {
		return head->data;
	}
	else {
		throw runtime_error("The list is empty.");

	}
};

//this function takes no parameters, and it returns the last element in the list.
//throw an error if the list is empty.
template <typename T>
T& SingleLinkedList<T>::back() {
	if (num_items != 0) {
		return tail->data;
	}
	else {
		throw runtime_error("The list is empty.");
	}
};

// this fucntion check wehter or not the list is empty, return 1 if the list is 
//empty, return  if it's not empty
template <typename T>
bool SingleLinkedList<T>::empty() {
	if (num_items == 0) {
		return true;
	}
	else {
		return false;
	}
};

//this function takes two parameters(where you want to insert in the list, the
//item you want to insert)
template <typename T>
void SingleLinkedList<T>::insert(size_t index, T& item) {
	Node<T>* temp = head;
	Node<T>* newNode = new Node<T>(item);
	if (index > 0 && index <= num_items) {
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		num_items++;
	}
	else if (index > num_items) {
		push_back(item);
	}
	else {
		push_front(item);
	}
};

// this fucntion takes one parameter(where you want to remove in the list),
// return true if the index is in the range, return false if it's out of range.
template <typename T>
bool SingleLinkedList<T>::remove(size_t index) {
	Node<T>* temp = head;
	if (num_items == 0 || num_items < index) {
		return false;
	}
	if (index == 0) {
		pop_front();
		return true;
	}

	for (int i = 0; i < index - 1; i++) {
		temp = temp->next;
	}
	if (temp->next = tail) {
		tail = temp;
		temp->next = nullptr;
	}
	else {
		temp->next = temp->next->next;
	}
	num_items--;
	return true;
};

// this function takes one parameter, the element you want to find in the list and
// return the index.
template <typename T>
size_t SingleLinkedList<T>::find(const T& item) {
	Node<T>* temp = head;
	int i = 0;

	while (temp != nullptr) {
		if (item == temp->data) {
			return i;
		}
		else {
			temp = temp->next;
			i++;
		}
	}
	return i;

};
