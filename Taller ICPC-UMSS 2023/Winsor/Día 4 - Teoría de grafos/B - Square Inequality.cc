#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long a, b, c;
    cin >> a >> b >> c;
    if (a * a + b * b < c * c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}