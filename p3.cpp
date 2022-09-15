#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void definirVector(int* lista,int _long){

    cout << "array: ";
    for (int i = 0; i < _long; ++i) {
        cin >> lista[i];
    }
}

void sawp(int* listaa,int* listab,int _long){
    int aux=0;
    int long2=0;
    if(_long%2!=0){
     long2 = _long -1;
        aux = listab[_long-1];
        listab[_long-1] = listaa[_long-1];
        listaa[_long-1] = aux;
    }

    for (int i = 0; i < long2; ++i) {
        if(i%2==0){
            aux = listaa[i];
            listaa[i] = listab[i+1];
            listab[i+1] = aux;
        }else{
            aux = listaa[i];
            listaa[i] = listab[i-1];
            listab[i-1] = aux;
        }
    }
}

void inprimir(int* lista,int _long){

    cout << "array modificada: ";
    for (int i = 0; i < _long; ++i) {
        cout << lista[i]<<" ";
    }
    cout << endl;
}

int main() {

    int _long = 0;

    cout << "Ingrese tamano de los array:";cin>>_long;

    int* a = new int[_long];
    int* b = new int[_long];

    cout << "Primer ";definirVector(a,_long);
    cout << "Segundo ";definirVector(b,_long);
    sawp(a,b,_long);

    inprimir(a,_long);
    inprimir(b,_long);

    delete a;
    delete b;
    return 0;
}
