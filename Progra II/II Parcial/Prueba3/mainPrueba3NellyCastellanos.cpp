#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero, xdigito, contador;


void Ingresar(int &numero)
{

    do
    {
        cout << "Ingresar un numero:";
        cin >> numero;

    }while (!(((numero % 2)==0) or ((numero % 5)==0)));
    _flushall();

}

void Calcular(int numero, int &xdigito, int &contador)
{
    contador=0;
    while (numero>0)
    {
        xdigito= (numero % 10);
        numero=numero/10;
        contador++;

    }
}

void Presentar(int contador)
{
    cout << "El numero de cifras del numero es:" << contador << "\n";
}

int main()
{
    for (int i=0;i<5;i++)
    {
        Ingresar(numero);
        Calcular(numero, xdigito, contador);
        Presentar(contador);
    }

    return 0;
}
