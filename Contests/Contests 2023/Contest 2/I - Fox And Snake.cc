#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int j = 1;
    cin >> n >> m;
    string x1 = "";
    string x2 = "";
    for (int i = 0; i < m; i++)
    {
        if (i < m - 1)
        {
            x2 += ".";
        }
        x1 += "#";
    }

    for (int i = 0; i < n; i++)
    {

        if (j == 1 || j == 3)
        {
            cout << x1 << '\n';
            j++;
        }
        else if (j == 2)
        {
            cout << x2 << "#" << '\n';
            j++;
        }
        else
        {
            cout << "#" << x2 << '\n';
            j = 1;
        }
    }
}