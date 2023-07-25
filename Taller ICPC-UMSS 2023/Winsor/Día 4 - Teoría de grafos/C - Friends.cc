#include <bits/stdc++.h>
using namespace std;

// dfs

void dfs(vector<bool> &vis, vector<vector<long long>> &g, long long node, long long &res)
{
    vis[node] = 1;
    for (long long x = 0; x < g.size(); x++)
    {
        if (!vis[x] && g[node][x] == 1)
        {
            res = res + 1;
            dfs(vis, g, x, res);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long t, n, m, a, b, res, resReal;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        cin >> n >> m;
        vector<vector<long long>> g(n, vector<long long>(n));
        vector<bool> vis(n);
        resReal = 0;
        res = 1;
        // Hacer matriz
        for (long long j = 0; j < m; j++)
        {
            cin >> a >> b;
            a--, b--;
            g[a][b] = 1;
            g[b][a] = 1;
        }
        for (long long j = 0; j < n; j++)
        {
            dfs(vis, g, j, res);
            resReal = max(resReal, res);
            res = 1;
        }
        cout << resReal << '\n';
    }
}