#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long n, m, res = 0;
    cin >> n >> m;
    while (n != m)
    {
        if (n > m)
        {
            n = m;
            res += n - m;
        }
        else
        {
            if (n * 2 >= m)
            {
                
            }
            else
            {
                n = n * pow(2, ceil(m / (n * 2)));
            }
            cout << "n ahora es " << n << '\n';
        }
    }
}