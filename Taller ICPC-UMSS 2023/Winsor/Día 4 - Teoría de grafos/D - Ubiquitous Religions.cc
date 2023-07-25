#include <bits/stdc++.h>
using namespace std;

// DFS
void dfs(vector<bool> &vis, vector<vector<long long>> &g, long long node, long long &res, long long &recorridos)
{
    if (!vis[node])
    {
        vis[node] = 1;
        for (long long x = 0; x < g.size(); x++)
        {
            if (!vis[x] && g[node][x] == 1)
            {
                recorridos++;
                dfs(vis, g, x, res, recorridos);
            }
        }
        if (recorridos <= 1)
        {
            res++;
        }
    }
    else
    {
        recorridos = 0;
    }
}

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long n, m, a, b, res, recorridos, k = 1;
    while (cin >> n && cin >> m && n && m)
    {
        vector<vector<long long>> g(n, vector<long long>(n));
        vector<bool> vis(n);
        res = 0, recorridos = 0;
        for (long long j = 0; j < m; j++)
        {
            cin >> a >> b;
            a--, b--;
            g[a][b] = 1;
            g[b][a] = 1;
        }
        for (long long j = 0; j < n; j++)
        {
            dfs(vis, g, j, res, recorridos);
        }
        cout << "Case " << k << ": " << res << '\n';
        k++;
    }
}