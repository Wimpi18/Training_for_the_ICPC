#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int numero, cantRestas;
    cin >> numero >> cantRestas;
    for (int i = 0; i < cantRestas; i++)
    {
        if ((numero % 10) == 0)
        {
            numero = numero / 10;
        }
        else
        {
            numero = numero - 1;
        }
    }
    cout << numero << '\n';
}