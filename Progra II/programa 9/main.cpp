#include <iostream>

using namespace std;
/*
estructuras de repeticón
ingresar 5 numero y presentar al final de ciclo la suma de los
nueros ingresados.
*/
int main()
{ int numero, contador, suma;
    contador= 0;
    suma=0;
    while (contador<5)
        {
            cout<<"ingresar un numero...>";
            cin >> numero;

            contador ++; //contador = contador +1

            suma+= numero ; // suma = sumas + numero;

        }
        cout<<"Suma de los numeros es "<<suma<<"\n";
    return 0;
}
