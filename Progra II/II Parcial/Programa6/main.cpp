#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero, xdigito, contador;

int NumeroCifras(int numero)
{ int xdigito, contador;

    contador=0;
    while (numero>0)
    {
        xdigito= (numero % 10);
        numero=numero/10;
        contador++;

    }
}

int main()
{
    for (int i=0;i<5;i++)
    {
         do
    {
        cout << "Ingresar un numero:";
        cin >> numero;

    }while (!(((numero % 2)==0) or ((numero % 5)==0)));
    _flushall();

    contador=NumeroCifras(numero);

    cout << "El numero de cifras del numero es:" << contador << "\n";
    }

    return 0;
}

