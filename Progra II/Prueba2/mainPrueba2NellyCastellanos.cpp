#include <iostream>

using namespace std;
/* Ingresar 10 numeros, al final presentar cuantos numeros fueron divisibles entre 5, el promedio
de los divisibles entre 5 y el numero mayor de todos los numeros */
int main()
{ int numero, promedio,  Nmayor, Div, suma;

Nmayor=0;
Div=0;
suma=0;

    for (int i=0;i<10;i++)
    {
         cout << "Ingresar numero:";
         cin >> numero;

        if ((numero%5)==0)
        {
            Div++;
            suma+=numero;
        }

        if (numero>Nmayor)
            Nmayor=numero;

    }

     if(suma!=0)
    {
        promedio=suma/Div;
    }
    else
    {
        promedio=0;
    }

    cout << "Los numeros divisibles entre 5 son:" << Div << "\n";
    cout << "El promedio es:" << promedio << "\n";
     cout << "El numero mayor es:" << Nmayor << "\n";


    return 0;
}
