#include "lista.h"

template<typename T>
nodo<T>::nodo()
{
    elem = NULL;
    next = NULL;
}

template<typename T>
nodo<T>::nodo(T elem_)
{
    elem = elem_;
    next = NULL;
}

template<typename T>
void nodo<T>::print()
{
    cout << elem << "-> ";
}
template<typename T>
nodo<T>::~nodo() {}