#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &g, long long cantRocas)
{
    // long long res = 0;
    if (cantRocas == 0)
        return 0;
    if (cantRocas >= 2)
    {
        if (abs(g[g.size() - cantRocas]) == abs(g[g.size() - cantRocas + 1]))
            return abs(g[g.size() - cantRocas + 1]) + solve(g, cantRocas - 1);
        else if (abs(g[g.size() - cantRocas]) < abs(g[g.size() - cantRocas + 1]))
            return abs(g[g.size() - cantRocas]) + solve(g, cantRocas - 1);
        else
            return abs(g[g.size() - cantRocas + 1]) + solve(g, cantRocas - 1);
    } else{
        return abs(g[g.size() - cantRocas + 1]) + solve(g, cantRocas - 1);
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long n, h, res = 0;
    vector<long long> rocas;
    cin >> n;
    for (long long i = 0; i < n - 2; i++)
    {
        cin >> h;
        rocas.push_back(h);
    }
    res = solve(rocas, n);
    cout << res;
}