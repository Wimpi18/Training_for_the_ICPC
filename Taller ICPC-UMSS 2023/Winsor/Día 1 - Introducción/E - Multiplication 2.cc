#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, x, res = 1;
    bool seExcede = false;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        if (res * x <= 1000000000000000000ll && seExcede == false || x == 0)
        {
            res = res * x;
        }
        else
        {
            seExcede = true;
            res = -1;
        }
    }
    cout << res << '\n';
}