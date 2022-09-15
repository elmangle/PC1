#include <iostream>
using namespace std;

int main() {

    int _long = 0;

    cout << "Cantidad de peldanos:";cin>>_long;

    int* a = new int[_long];

    for (int i = 0; i < _long; ++i) {
        if (i<2){
            a[i] = i+1;
        }else{
            a[i] = a[i-1] + a[i-2];
        }
    }
    cout <<"Tiene "<< a[_long-1]<<" posibilidades de subir una escalera con 10 peldanos";
    delete[] a;
    ret
