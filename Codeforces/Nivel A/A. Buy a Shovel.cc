#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int precioPala, burle, contador = 1;
    cin >> precioPala >> burle;
    int aux = precioPala;
    while (precioPala % 10 != burle && precioPala % 10 != 0)
    {
        precioPala += aux;
        contador++;
    }
    cout << contador << '\n';   
}