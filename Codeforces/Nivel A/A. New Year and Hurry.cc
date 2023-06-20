#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, minutosRestantes, contador = 0;
    cin >> n >> k;
    minutosRestantes = 240 - k;
    for (int i = 1; minutosRestantes >= 5*i && contador != n; i++)
    {
        minutosRestantes -= 5 * i;
        contador++;
    }
    cout << contador << '\n';
}