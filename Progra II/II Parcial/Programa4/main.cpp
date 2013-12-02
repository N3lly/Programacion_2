#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;
/* Ingresar el nombre del empleado, las horas y el turno usando un procedimiento. Luego determinar el pxh usando el turno,
el pago de horas, ihss y total a pagar usando un procedimiento.

turno   pxh
1       100
2       150
3       180

Presentar los datos usando un procedimiento.
*/

char nombre[30];
int horas, turno, pxh, ihss, totalP, pb;

void Ingresar(char nombre[], int &horas, int &turno)
{
    cout << "Ingresar nombre del empleado:";
    cin.getline(nombre,30);

    cout << "Ingresar horas:";
    cin >> horas;

    do
    {
        cout << "Ingresar turno:";
        cin >> turno;

    }while ((turno<1) or (turno>3));
    _flushall();

}

void Calcular(int turno, int horas, int &pxh, int &pb, int &ihss, int &totalP)
{

    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=150;
        break;
    default:
        pxh=180;
        break;
    }

    pb=pxh*horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=pb*0.035;
    }

    totalP=pb-ihss;


}

void Presentar(int pxh, int pb, int ihss, int totalP)
{
    cout << "El pago por hora es:" << pxh << "\n";
    cout << "El pago bruto es:" << pb << "\n";
    cout << "El IHSS es:" << ihss << "\n";
    cout << "El total a pagar es:" << totalP << "\n";

}
int main()
{
    for (int i=0;i<3;i++)
    {
        Ingresar(nombre, horas, turno);
        Calcular(turno, horas, pxh, pb, ihss, totalP);
        Presentar(pxh, pb, ihss, totalP);
    }


    return 0;
}
