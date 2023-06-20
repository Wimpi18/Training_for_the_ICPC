#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long num, contador = 0;
    cin >> num;
    while (num / 10 != 0)
    {
        if (num % 10 == 4 || num % 10 == 7)
        {
            contador++;
        }
        num /= 10;
    }
    if (num % 10 == 4 || num % 10 == 7)
    {
        contador++;
    }
    if (contador == 4 || contador == 7)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}