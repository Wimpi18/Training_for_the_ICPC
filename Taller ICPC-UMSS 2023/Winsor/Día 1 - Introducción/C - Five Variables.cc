#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, res;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (x == 0)
        {
            res = i + 1;
        }
    }
    cout << res;
}