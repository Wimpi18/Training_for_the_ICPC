#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long funcion, resultado = 0/*, i = 1*/;
    cin >> funcion;
    if (funcion % 2 == 0)
    {
        resultado = funcion / 2;
    }
    else
    {
        resultado = -1 * ((funcion + 1) / 2);
    }
    /*for (i; i <= funcion; i++)
    {
        if (i % 2 == 0)
        {
            resultado += i;
        }
        else
        {
            resultado -= i;
        }
    }*/
    cout << resultado << '\n';
}