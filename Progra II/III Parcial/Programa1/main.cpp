#include <iostream>

using namespace std;
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
    Presentar(num);
    return 0;
}
