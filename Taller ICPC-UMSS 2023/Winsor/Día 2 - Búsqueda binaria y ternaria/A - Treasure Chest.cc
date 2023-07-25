#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, punto = -1;
    char s;
    int a = -1, b = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == '|')
        {
            if (a < 0)
            {
                a = i;
            }
            else
            {
                b = i;
            }
        }
        else if (s == '*')
        {
            punto = i;
        }
    }

    if (punto > a && punto < b)
    {
        cout << "in" << '\n';
    }
    else
    {
        cout << "out" << '\n';
    }
}