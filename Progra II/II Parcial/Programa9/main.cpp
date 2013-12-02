#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
/* Elaborar u procedimiento para ingresar un numero entre 1-10.
Luego determinar el factorial del numero ingresado usando una funcion.
Hacerlo para 5 numeros (usar ciclo for).
*/

int numero;

void Ingresar(int &numero)
{
    do
    {

    cout << "Ingresar un numero:";
    cin numero;

    }while ((numero<1) or (numero>10));


}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
