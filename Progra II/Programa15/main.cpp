#include <iostream>

using namespace std;

int main()
{ int num, cifra, suma, mini, maxi, contador, cpar, cimpar;
double promedio;

    cout << "Ingresar un numero Entero:";
    cin >> num;

    suma=0;
    maxi=0;
    mini=9;
    contador=0;
    cpar=0;
    cimpar=0;

    cout << "Numero al reves:";

    while (num>0)
    {
        cifra= num % 10;
        cout<<cifra;
        num=num/10;
        suma+=cifra;
        contador++;

        if (cifra>maxi)
            maxi=cifra;

        if  (cifra<mini)
            mini=cifra;

            if ((cifra%2)==0)
                cpar++;
            else
                cimpar++;



    }

    promedio=suma/contador;

    cout << "\n";
    cout << "Suma de las cifras es:" << suma << "\n";
    cout << "El numero mayor es:" << maxi << "\n";
    cout << "El numero menor es:" << mini << "\n";
    cout << "El promedio es:" << promedio << "\n";
    cout << "Cifras pares:" << cpar << "\n";
    cout << "Cifras impares:" << cimpar << "\n";
    return 0;
}
