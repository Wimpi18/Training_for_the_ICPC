#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, a, k_esimo = -1, contador = 0, i, resultado = 0, primer_puesto, contadorDeCeros = 0;
    ;
    bool empezarComparar = false;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (i == 1)
        {
            primer_puesto = a;
        }
        if ((a == 0 && i <= k) || (a == 0 && k_esimo == 0))
        {
            contadorDeCeros++;
        }
        if (i == k)
        {
            k_esimo = a;
            empezarComparar = true;
        }
        contador++;
        if (empezarComparar == true)
        {
            if (a >= k_esimo)
            {
                resultado = contador;
            }
        }
    }

    if (primer_puesto == 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << resultado - contadorDeCeros << endl;
    }
}