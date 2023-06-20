#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    string res = "#Black&White";
    cin >> n >> m;
    for (int i = 0; i < n * m; i++)
    {
        char letra;
        cin >> letra;
        if (letra == 'C' || letra == 'M' || letra == 'Y')
        {
            i = n * m;
            res = "#Color";
        }
    }
    cout << res << '\n';
}