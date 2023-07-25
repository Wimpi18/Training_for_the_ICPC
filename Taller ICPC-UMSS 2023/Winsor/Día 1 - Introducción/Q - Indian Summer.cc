#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string hoja;
    string color;
    cin >> n;
    set<pair<string, string>> colHojas;
    for (int i = 0; i < n; i++)
    {
        cin >> hoja >> color;
        colHojas.insert({hoja, color});
    }
    cout << colHojas.size() << '\n';
}