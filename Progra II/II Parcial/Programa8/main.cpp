#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
/* Ingresar base y exponente usando un procedimiento.
Luego calcular la base y el exponente usando una funcion.
Luego preguntar si desea continuar usando una funcion para devolver una respuesta
s o n validada */

char respuesta()
{ char resp;
    do
    {
        cout << "Desea continuar:";
        cin.get (resp);

    }while ((resp!='S') and (resp!='N'));
    return resp;
}
// Procesimiento para ingresar base y expo.

void Ingreso(int &base, int &expo)
{
    cout << "Ingresar base:";
    cin >> base;

    cout << "Ingresar exponente:";
    cin >> expo;
}

// Funcion para calcular la potencia.
int potencia(int base, int expo)
{   int pot=1;


    for (int i=0;i<expo;i++)
    {
        pot*=base;
    }

    return pot;
}




int main()
{ char resp;
    int base, expo, poten;
    do
    {
        Ingreso(base, expo);
        poten=potencia(base, expo);
        _flushall();
        cout << "Potencia es:" << poten << "\n";
        resp=respuesta();
    }while (resp!='N');

    return 0;

}
