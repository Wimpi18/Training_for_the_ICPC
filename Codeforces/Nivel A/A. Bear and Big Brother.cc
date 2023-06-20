#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pesoLimak, pesoBob, contador = 0;
    cin >> pesoLimak >> pesoBob;
    while (pesoBob >= pesoLimak)
    {
        pesoLimak = pesoLimak * 3;
        pesoBob = pesoBob * 2;
        contador++;
    }
    cout << contador << '\n';
}