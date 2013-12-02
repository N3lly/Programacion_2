#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;
int num[50], suma, suma1, Nmayor1, doble[50], Arreglo1;

void Ingresar(int num[])
{
    for (int i=0;i<5;i++)
    {
        do{
        cout << "Ingresar numero:";
        cin >> num[i];
        }while (!(num[i]%2)==0);

    }
}

int SumaNumero(int num[])
{   suma=0;
    for (int i=0;i<5;i++)
    {
    if (num[i]>100)
    {
        suma+=num[i];
    }
    }
    return suma;
}

int NumeroMayor(int num[])
{
    int Nmayor=num[0];
    for (int i=0;i<5;i++)

    { if ((num[i]%5)==0)
    {
        if (num[i]>Nmayor)
        {
            Nmayor=num[i];
        }
    }
    }

    return Nmayor;
}

void CalcularDoble(int num[], int doble[])
{
    for (int i=0;i<5;i++)
    {
        doble[i]=(num[i]*2);
    }
}

void Presentar(int num[], int suma)
{
    suma1=SumaNumero(num);
    Nmayor1=NumeroMayor(num);

    cout << "La suma de los numeros mayores a 100 es:" << suma1 << "\n";
    cout << "El numero mayor de los numeros divisibles entre 5 es:" << Nmayor1 << "\n";
    cout << "El contenido del arreglo es:" << Arreglo1 << "\n";

}

void Presentar2(int num[], int doble[])
{
    for (int i=0;i<5;i++)
    {
        cout << "El contenido del arreglo es:" << doble[i] << "\n";
    }
}

int main()
{
   Ingresar(num);
   CalcularDoble(num, doble);
   Presentar(num, suma);
   Presentar2(num, doble);
    return 0;
}


















