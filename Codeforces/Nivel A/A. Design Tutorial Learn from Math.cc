#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int numero, aux1, aux2;
    bool verificador = true;
    cin >> numero;
    aux1 = numero / 2;
    aux2 = aux1 + numero % 2;
    while (verificador)
    {
        if ((aux1 % 2 == 0 && aux2 % 2 == 0) || (aux1 % 2 == 0 && aux2 % 3 == 0) || (aux1 % 3 == 0 && aux2 % 2 == 0) || (aux1 % 3 == 0 && aux2 % 3 == 0))
        {
            verificador = false;
        }
        else
        {
            aux1--;
            aux2++;
        }
    }
    cout << aux1 << '\n';
    cout << aux2 << '\n';
}