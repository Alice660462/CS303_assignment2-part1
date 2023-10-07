/* Alice Zhao
* SingleLinkedList
*/

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
#include<string>
#include<iostream>
template <typename T>
// struct a Node has T type data and a pointer that point to the next node
struct Node {
	T data;
	Node* next;
	Node(T& data1) :data(data1), next(nullptr) {}
};
template <typename T>
class SingleLinkedList {
public:
	void push_front(T& item);
	void push_back(T& item);
	void pop_front();
	void pop_back();
	T& front();
	T& back();
	bool empty();
	void insert(size_t index, T& item);
	bool remove(size_t index);
	size_t find(const T& item);
	SingleLinkedList() : head(nullptr), tail(nullptr), num_items(0) {}


private:
	// head point at the the first node and tail point at the last node,
	// num_items stores total number of node.
	Node<T>* head;
	Node<T>* tail;
	int num_items;
};

#endif
