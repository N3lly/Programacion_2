#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
/* Ingresar el nombre y las horas, usando un procedimiento. Luego determinar las horas normales usando una funcion,
lo mismo con las horas extras.
Las primeras 40 son normales y las demas son extras.

Luego determinar el pago por hora normal y extra usando un procedimiento.
Turno   Pago Normal     Pago Extra
1       100             120
2       130             150
3       140             160

Elaborar una funcion para el ihss. Usando un procedimiento realizar los calculos y en otro procedimiento presentar
los datos.
*/

char nombre[30];
int turno, horas, hn, he;
double pxn, pxe, pn, pe, pb, ihss, tp;

void Ingresar(char nombre[], int &horas, int &turno)
{
    cout << "Ingresar nombre del empleado:";
    cin.getline(nombre,30);

    cout << "Ingresar horas trabajadas:";
    cin >> horas;

    do
    {
        cout << "Ingresar turno:";
        cin >> turno;

    }while ((turno<1) or (turno>3));
    _flushall();
}

int horasn(int horas)
{
    if (horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}

int horase(int horas)
{
    if (horas>40)
    {
        return horas-40;
    }
    else
    {
        return 0;
    }
}

void Pagoxh(int turno, double &pxn, double &pxe)
{
    switch (turno)
    {
    case 1:
        pxn=100;
        pxe=120;
        break;
    case 2:
        pxn=130;
        pxe=150;
        break;
    case 3:
        pxn=140;
        pxe=160;
        break;
    }
}

double seguro(double sueldo)
{
    if (sueldo>7000)
    {
        return 245;
    }
    else
    {
        return (sueldo*0.035);
    }
}

void Calcular(int turno, int horas, double &pxn, double &pxe, double &pn, double &pe, double &pb, double &ihss, double &tp, int &hn, int &he)
{
    hn=horasn(horas);
    he=horase(horas);

    pagos(turno,pn,pe);

    pn=hn*pxn;
    pe=he*pxe;

    pb=pn+pe;

    ihss=seguro(pb);

    tp=((pb+pe)-ihss);
}

void Presentar(int turno, int horas, double pxn, double pxe, double pn, double pe, double pb, double ihss, double tp, int hn, int he)
{
    cout << "Horas normales:" << hn << "\n";
    cout << "Horas extras:" << he << "\n";
    cout << "Pago por hora normal:" << pxn << "\n";
    cout << "Pago por hora extra:" << pxe << "\n";
    cout << "Pago normal:" << pn << "\n";
    cout << "Pago extra:" << pe << "\n";
    cout << "Pago bruto:" << pb << "\n";
    cout << "IHSS:" << ihss << "\n";
    cout << "Pago total a pagar:" << tp << "\n";
}
int main()
{
    Ingresar(nombre, horas, turno);
    Calcular(turno, horas, pxn, pxe, pn, pe, pb, ihss, tp, hn, he);
    Presentar(turno, horas, pxn, pxe, pn, pe, pb, ihss, tp, hn, he);

    return 0;
}
