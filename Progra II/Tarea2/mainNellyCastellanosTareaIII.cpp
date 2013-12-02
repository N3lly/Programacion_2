#include <iostream>

using namespace std;
/* .: TAREA 2 :.
Con el programa se debera ingresar un numero y presentar la suma de sus digitos.
*/
int main()
{ int numero, suma;
suma=0;

    cout << "Ingresar un numero:";
    cin >> numero;

 while (numero>0) /* El ciclo se repetira infinitas veces si el numero ingresado no es cero */
 {
     suma= suma + (numero % 10);
       numero=numero/10;
 }

 cout << "La suma de los numeros es:" << suma << "\n";

    return 0;
}
