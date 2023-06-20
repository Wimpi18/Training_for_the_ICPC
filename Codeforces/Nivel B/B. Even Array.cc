#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tam, elemento, contador, contador1, contador0;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> tam;
        int array[tam];
        contador = 0;
        contador1 = 0;
        contador0 = 0;
        for (int t = 0; t < tam; t++)
        {
            cin >> elemento;
            array[t] = elemento % 2;
            if (array[t] != t % 2)
            {
                contador++;
            }
            if (elemento % 2 == 0)
            {
                contador0++;
            }
            else
            {
                contador1++;
            }
        }
        if (contador % 2 != 0 || (tam % 2 == 0 && contador0 != contador1) || (tam % 2 == 1 && contador1 != contador0 - 1))
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << contador / 2 << '\n';
        }
    }
}