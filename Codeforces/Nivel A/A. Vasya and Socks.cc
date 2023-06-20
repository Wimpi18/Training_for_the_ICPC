#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nParesCalc, mDiaCompra;
    cin >> nParesCalc >> mDiaCompra;
    int contador = 1, res = 0;
    while (nParesCalc > 0)
    {
        if (contador % mDiaCompra == 0)
        {
            nParesCalc++;
        }
        contador++;
        nParesCalc--;
        res++;
    }
    cout << res << '\n';
}