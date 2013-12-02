#include <iostream>

using namespace std;
/* Tenemos un arreglo de 4 lineas y 4 columnas, pero solo vamos a ingresar valores en las 3 primeras columnas
y la ultima la dejamos reservada para la suma de cada una de las lineas.
*/

const int lin=4;
const int col=3;
int num[lin][col];

void Ingreso(int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for (int c=0;c<col;c++)
        {
            cout << "Ingresar Dato [" << l << "," << c << "]..";
            cin >> num[l][c];
        }
    }
}

void Sumarlineas(int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {num[l][col-1]=0;
        for (int c=0;c<col;c++)
        {
            num[l][col-1]+=num[l][c];
        }
        cout << "\n";
    }
}

void Presentar (int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for (int c=0;c<col;c++)
        {
            cout << num[l][c] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    Ingreso(num);
    Sumarlineas(num);
    Presentar(num);
    return 0;
}
