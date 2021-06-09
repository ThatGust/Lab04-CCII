#ifndef LK_LIST
#define LK_LIST

#include <fstream>
#include <iostream>
#include <stdlib.h>

#include "lista.h"
#include "lista_main.cpp"
#include <iostream>

using namespace std;
template <class T>

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void insert_in(T);
	void insert(int);
	void remove(int); 
	void print();

private:
	nodo<T> *head;
	int size;
};

#endif