#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
struct Node
{
	T * data;
	Node *next;
};

template <class T>
class List
{
public:
	// Ctor cctor
	List();
	List(T value);
	List(const List& L);
	List& operator=(const List& L);
	List& operator<<(int value);
	friend ostream& operator<<(ostream& os, const List<T>& L) {

	}
	Node<T>* getHead() {
		return head;
	}
	~List();

	int find(T element);
	bool isEmpty();
	void add(T element);
	void remove(T element);
	T get(int idx) const;

private:
	Node<T> *head;
};

template <class T>
List<T>::List() {
	head = NULL;
}


template <class T>
List<T>::List(T value) {
	Node<T>* node = new Node<T>();

	*(node->data) = value;
	node->next = this->head;
	this->head = node;
}

template <class T>
List<T>::List(const List<T>& L) {
	Node<T> *address = L.head;

	this->head = NULL;

	if(address != NULL){
		while(address->next != L.head) {
			add(*(address->data));
			address = address->next;
		}
		add(*(address->data));
	}
}

template <class T>
List<T>& List<T>::operator=(const List<T>& L) {
	Node<T> *address = head;
	while(head!= NULL){
		remove(*(this->head->data));
		address = head;
	}

	address = L.head;
	Node<T> *addressNext = address->next;

	if(address != NULL){
		while(address->next != L.head) {
			add(*(address->data));
			address = address->next;
		}
		add(*(address->data));
	}
}

template <class T>
List<T>& List<T>::operator<<(int value) {
	add(value);
	return *this;
}

template <class T>
List<T>::~List() {
	while(head!= NULL){
		remove(*(head->data));
	}
}
	

template <class T>
int List<T>::find(T element) {
	int index = 0;
	int answer = -1;
	Node<T>* temp;

	temp = this->head;
	while(temp->next != this->head) {
		if(*(temp->data) == element) {
			answer = index;
			break;
		}
		index++;
		temp = temp->next;
	}

	if(*(temp->data) == element) answer = index;

	return answer;
}


template <class T>
bool List<T>::isEmpty() {
	return this->head == NULL;
}


template <class T>
void List<T>::add(T element) {
	Node<T>* node = new Node<T>();

	*(node->data) = element;
	if(isEmpty()) {
		this->head = node;
		this->head->next = this->head;
	} else {
		Node<T>* last = this->head;
		while(last->next != this->head) {
			last = last->next;
		}
		*(node->data) = element;
		node->next = this->head;
		last->next = node;
	}
}


template <class T>
void List<T>::remove(T element) {
	Node<T> *temp, *prev;

	if(!isEmpty()) {
		// If one element only
		if(this->head->next == this->head) {
			this->head = NULL;
		} else {
			temp = this->head;
			prev = this->head;
			while(prev->next != this->head) prev = prev->next;
			while(*(temp->data) != element && temp->next != this->head) {
				prev = temp;
				temp = temp->next;
			}
			if(prev->next != this->head) prev->next = temp->next;
			else {
				this->head = temp->next;
				prev->next = this->head;
			}
			temp = temp->next;
		}
	}
}


template <class T>
T List<T>::get(int idx) const {
	int index = 0;
	T answer;
	Node<T>* temp;

	temp = this->head;
	while(temp->next != this->head) {
		if(index == idx) {
			answer = *(temp->data);
			break;
		}
		index++;
		temp = temp->next;
	}

	if(index == idx) {
		answer = *(temp->data);
		return answer;
	} else return -1; // -1 if index not found
}


#endif
