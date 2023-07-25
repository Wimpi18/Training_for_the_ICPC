#include <bits/stdc++.h>
using namespace std;
void factors(long long n)
{
    long long x;
    string res = "";
    for (x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            res += to_string(x);
            res += " x ";
            n /= x;
        }
    }
    if (n > 1)
        res += to_string(n);
    else
        res.pop_back(), res.pop_back(), res.pop_back();
    cout << res << '\n';
}
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long g;
    while (cin >> g && g)
    {
        cout << g << " = ";
        if (g < 0)
        {
            cout << "-1"
                 << " x ";
        }
        factors((long long)abs(g));
    }
}