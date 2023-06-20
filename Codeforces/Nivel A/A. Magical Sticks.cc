#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int limite, casos;
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        cin >> limite;
        if (limite % 2 == 0)
        {
            cout << limite / 2 << '\n';
        }
        else
        {
            cout << (limite / 2) + 1 << '\n';
        }
    }
}