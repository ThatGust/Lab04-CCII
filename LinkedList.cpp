#include "LinkedList.h"

using namespace std;

template<typename T>
LinkedList<T>::LinkedList()
{
    size = 0;
    head = NULL;
}

template<typename T>
void LinkedList<T>::insert_in(T data_)
{
    nodo<T>* new_node = new nodo<T>(data_);
    nodo<T>* temp = head;

    if (!head) {
        head = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    size++;
}

template<typename T>
void LinkedList<T>::insert(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Inserte un numero: " << endl;
        cin >> ele;
        insert_in(ele);
    }
}


template<typename T>
void LinkedList<T>::remove(int pos)
{
    nodo<T> *temp = head;
    nodo<T> *temp1 = temp->next;

    if (pos < 1 || pos > size) {
        cout << "Fuera de rango " << endl;
    }
    else if (pos == 1) {
        head = temp->next;
    }
    else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                nodo<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

template<typename T>
void LinkedList<T>::print()
{
    nodo<T> *temp = head;
    if (!head) {
        cout << "La Lista está vacía " << endl;
    }
    else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
}

template<typename T>
LinkedList<T>::~LinkedList() {}