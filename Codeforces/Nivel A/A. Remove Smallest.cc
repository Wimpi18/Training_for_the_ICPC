#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tam, elementos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> tam;
        int contador = 0;
        int array[tam];
        for (int j = 0; j < tam; j++)
        {
            cin >> elementos;
            array[j] = elementos;
            if (j > 0)
            {
                //cout << "La resta absoluta es " << abs(elementos - array[j - 1]) << endl;
                if (abs(elementos - array[j - 1]) >= 0 && abs(elementos - array[j - 1]) <= 1)
                {
                    contador++;
                }
            }
        }
        if (tam - contador == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}