#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a;
    string patron;
    int calorias[4];
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        calorias[i] = a;
    }
    cin >> patron;
    for (int i = 0; i < patron.length(); i++)
    {
        string s;
        s.replace(0, 1, 1, patron[i]);
        res += calorias[stoi(s) - 1];
    }
    cout << res << '\n';
}