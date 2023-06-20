#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, x, y, n, k, resto1, cociente1, cociente2;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> x >> y >> n;
        cociente1 = n / x;
        resto1 = n % x;
        cociente2 =  abs(cociente1 - abs(y - resto1));
        k = cociente2 * x + y;
        cout << k << '\n';
    }
}