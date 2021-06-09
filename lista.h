#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class nodo
{
public:
    nodo();
    nodo(T);
    ~nodo();
    nodo* next;
    T elem;
    void print();
};

#endif