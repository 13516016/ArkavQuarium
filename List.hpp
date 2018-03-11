#ifndef LIST_H
#define LIST_H

template<class T>
struct Node
{
	T data;
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
	~List();

	int find(T element);
	bool isEmpty();
	void add(T element);
	void remove(T element);
	T get(int idx);


private:
	Node<T> *head;
};


#endif