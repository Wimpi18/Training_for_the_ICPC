#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool verificador = false;
    int year, aux2, contadorVerf;
    int aux[4];
    cin >> year;
    while (!verificador)
    {
        contadorVerf = 0;
        year++;
        aux2 = year;
        aux[3] = aux2 % 10;
        aux2 /= 10;
        aux[2] = aux2 % 10;
        aux2 /= 10;
        aux[1] = aux2 % 10;
        aux2 /= 10;
        aux[0] = aux2 % 10;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (aux[i] != aux[j])
                {
                    contadorVerf++;
                }
            }
        }
        if (contadorVerf == 6)
        {
            verificador = true;
        }
    }
    cout << year << '\n';
}