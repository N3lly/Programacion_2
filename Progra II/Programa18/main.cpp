#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
/* Ingresar el nombre del alumno, luego debemos de pedir las tres notas parciales usando un ciclo, presentar el promedio, la nota
mayor de los tres parciales.
Preguntar si desea continuar, al final presentar el nombre dle alumno con la mayor nota. */
int main()
{
    char nombre[30];
    char resp;
    int nota, promedio, notamax, alumnomax;
    char nombreMayor[30];
    int notamayor, suma;
    char estado[30];

    alumnomax=0;

    do
    {
        cout << "Nombre del alumno:";
        cin.getline(nombre,30);
        suma=0;
        notamayor=0;

        for (int i=0;i<3;i++)
        {
            cout << "Ingresar el parcial.." << i << "..:";
            cin >> nota;
            suma+=nota;

            if (nota>notamayor)
                {
                    notamayor=nota;
                }
        }
        promedio=suma/3;

        if (promedio>=60)
        {
            strcpy(estado, "Aprobado");
        }
        else
        {
             strcpy(estado, "Reprobado");
        }
        cout << "Promedio del alumno:" << promedio << "\n";
        cout << "La nota mayor es:" << notamayor << "\n";
        _flushall();

         if (alumnomax<promedio)
        {
            alumnomax=promedio;
            strcpy(nombreMayor,nombre);
        }
        do
        {
            cout << "Desea continuar:";
            cin.get(resp);

        }while ((resp!='N') and (resp!='S'));
        _flushall();

    }while (resp!='N');

    cout << "Nombre del alumno con la mejor nota:" << nombreMayor;
    cout << "Con la nota:" << notamayor;





    return 0;
}
