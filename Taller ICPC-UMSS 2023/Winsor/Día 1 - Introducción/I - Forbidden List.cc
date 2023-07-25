#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, n, p;
    cin >> x >> n;

    if (n == 0)
    {
        cout << x << '\n';
    }
    else
    {
        map<int, bool> noValidos;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            noValidos[p] = true;
        }
        int i = 0, j = 0;
        while (noValidos[x + i] == true)
        {
            j++;
            if (j == 2)
            {
                i = i + 1;
                j = 0;
            }
            i = i * -1;
        }
        cout << x + i << '\n';
    }
}