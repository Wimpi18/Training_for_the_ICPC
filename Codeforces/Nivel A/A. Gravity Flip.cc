#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a;
    cin >> n;
    vector<int> caja;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        caja.push_back(a);
    }
    sort(caja.begin(), caja.end());
    for (int i = 0; i < n; i++)
    {
        cout << caja[i] << '\n';
    }
}