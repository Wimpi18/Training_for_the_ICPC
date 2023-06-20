#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long precio, dinero, cantBananas, precioTotal = 0;
    cin >> precio >> dinero >> cantBananas;
    for (long i = 1; i <= cantBananas; i++)
    {
        precioTotal += i * precio;
    }
    if ((precioTotal - dinero) < 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << (precioTotal - dinero) << '\n';
    }
}