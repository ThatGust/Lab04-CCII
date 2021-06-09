#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {
    LinkedList<int> list_1;
    int ele;

    int dim;
    int pos;

    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
    
    cout << "Insertar elemento: " << endl;
    list_1.insert(dim);
    list_1.print();
    

    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.remove(pos);
    list_1.print();



}
