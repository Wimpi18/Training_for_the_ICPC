#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    int i;
    cin >> n >> m;

    int num[n];

    for (int i = 0; i < n; i++)
    {

        num[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    i = n - 1;

    while (i >= 0)
    {

        if (num[i] + (n - i) <= m)
        {

            int v = num[i];

            for (int j = i; j < n; j++)
            {
                v++;
                num[j] = v;
            }
        }
        else
        {
            i--;
        }

        for (int i = 0; i < n; i++)
        {
            cout << num[i] << " ";
        }

        cout << endl;
    }
}