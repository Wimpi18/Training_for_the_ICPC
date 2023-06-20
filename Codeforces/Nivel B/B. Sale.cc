#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool numExiste(vector<int> array, int num);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n, tv, res = 0;
    vector<int> tvPagados;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> tv;
        if (tv < 0)
        {
            tvPagados.push_back(tv);
        }
    }
    sort(tvPagados.begin(), tvPagados.end());
    if (tvPagados.empty())
    {
        cout << res << '\n';
    }
    else
    {
        for (int i = 0; i < tvPagados.size() && i < n; i++)
        {
            res += tvPagados[i];
        }
        cout << abs(res) << '\n';
    }
}