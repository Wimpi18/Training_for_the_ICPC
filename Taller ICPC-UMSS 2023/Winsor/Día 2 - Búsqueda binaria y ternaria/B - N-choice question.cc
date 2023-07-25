#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c, res = -1;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (a + b == c && res < 0)
        {
            res = i + 1;
        }
    }
    cout << res;
}