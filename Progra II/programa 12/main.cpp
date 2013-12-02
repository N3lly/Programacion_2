#include <iostream>

using namespace std;
/*
Ingresar 5 numeros, presentar el promedio, determinar los numeros pares e impares y determinar cual es el mayor
*/
int main()
{ int numero, Npares, Nimpares, Nmayor, contador;
    int sumap, sumai, menor;
double promimpares, prompares;
sumap=0;
sumai=0;
Npares=0;
Nimpares=0;
Nmayor=0;
contador=0;
menor=1000000;

while (contador<5)
{
    cout<<"Ingrese un numero..";
    cin>> numero;


    if((numero % 2)==0)
    {
        sumap+=numero;//sumap=sumap+numero
        Npares++;
    }
    else
    {
        sumai+=numero;
        Nimpares++;
    }
    contador++;

    if (numero>Nmayor)
    {
        Nmayor=numero;
    }
    if (numero<menor)
    {
        menor=numero;
    }
}
if(sumap!=0)
{
    prompares=sumap/Npares;
}
else
{
    prompares=0;
}
if(sumai!=0)
{
    promimpares=sumai/Nimpares;
}
else
{
    promimpares=0;
}


    cout<<"Promedio pares:  "<<prompares<<"\n";
    cout<<"Promedio impares:  "<<promimpares<<"\n";
    cout<<"El numero mayor es:  "<<Nmayor<<"\n";
    cout<<"El numero menor es:  "<<menor<<"\n";
    return 0;
}
