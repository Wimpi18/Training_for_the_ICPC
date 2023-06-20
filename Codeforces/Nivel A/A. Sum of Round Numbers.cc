#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, numero, contador, j, k;
    int polinomio[1000];
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        bool salir = false;
        cin >> numero;
        contador = 0;
        j = 0;
        k = 0;
        while (!salir)
        {
            if (numero / 10 == 0)
            {
                salir = true;
            }
            if (numero % 10 != 0)
            {
                polinomio[j] = (numero % 10) * powf(10, k);
                j++;
                contador++;
            }
            k++;
            numero = numero / 10;
        }
        cout << contador << '\n';
        for (int a = 0; a < contador; a++)
        {
            cout << polinomio[a] << '\n';
        }
    }
}