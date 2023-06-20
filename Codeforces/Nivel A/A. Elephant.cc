#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long cantPasos = 0, distancia;
    cin >> distancia;

    while (distancia > 0)
    {
        distancia = distancia - 5;
        cantPasos++;
    }
    if (distancia > 0 && distancia < 5)
    {
        cantPasos++;
    }
    cout << cantPasos << '\n';
}