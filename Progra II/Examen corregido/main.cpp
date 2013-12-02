#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{int numero, suma, Nmayor, promedio, contador, suma1, xnumero, xdigito;
char resp;

    suma1=0;
    contador=0;
    Nmayor=0;

    do
    {


    do
    {
        cout << "Ingresar numero:";
         cin >> numero;

          } while (!(((numero % 2)==0) and ((numero>0) and (numero<201))));
        _flushall();

        xnumero=numero;
        suma=0;


         while (xnumero>0)
         {
             xdigito= (xnumero % 10);
             suma+=xdigito;
             xnumero=xnumero/10;


         }

         cout << "La suma de los numeros es:" << suma << "\n";

             suma1+=numero;
             contador++;

        if (numero>Nmayor)
         {
             Nmayor=numero;
         }




          do
            {
                cout << "Desea continuar:";
                cin.get(resp);
                _flushall();


            }while ((resp!='S') and (resp!='N'));
            _flushall();

            }while (resp!='N');

            promedio= suma1/contador;

            cout << "El Numero mayor es:" << Nmayor << "\n";
            cout << "El promedio es:" << promedio << "\n";



}
