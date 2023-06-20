#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantBolsas, sumaTotal = 0, a, cantPares = 0, cantImpares = 0;
    cin >> cantBolsas;
    for (int i = 0; i < cantBolsas; i++)
    {
        cin >> a;
        sumaTotal += a;
        if (a % 2 == 0)
        {
            cantPares++;
        }
        else
        {
            cantImpares++;
        }
    }

    if (sumaTotal % 2 == 0)
    {
        cout << cantPares << '\n';
    }
    else
    {
        cout << cantImpares << '\n';
    }
}