#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void numeroRand(int lista[],int _long){
    for (int i = 0; i < _long; ++i) {
        lista[i] = 1+ rand()%51;
    }
}

int main() {

    srand(time(NULL));

    int numeroPensado = 1+ rand()%51;

    int intentos = 1000;
    int a[4];
    int _long = 4;
    int aciertosi =0;
    int indice = 0;
    for (int i = 0; i < intentos; ++i) {
        numeroRand(a,_long);
        int aciertos =0;
        for (int i = 0; i < _long; ++i) {
            if(a[i] == numeroPensado) aciertos++;
        }
        if (aciertos>aciertosi){
            aciertosi = aciertos;
            indice = i;
        }
    }

    cout << "Paolo piensa en el numero "<<numeroPensado << endl << "Maximo "<<aciertosi <<" han pensado al mismo tiempo el mismo numero en "<< indice;
    return 0;
}
