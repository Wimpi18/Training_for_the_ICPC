#include <bits/stdc++.h>
using namespace std;

// Dijkstra
vector<long long> dijkstra(vector<vector<pair<long long, long long>>> &g, long long source)
{
    long long n = g.size();
    vector<long long> dis(n, 1e9);
    vector<bool> vis(n);
    priority_queue<pair<long long, long long>> que;
    que.push({0, source});
    dis[source] = 0;
    while (!que.empty())
    {
        long long node = que.top().second;
        que.pop();
        if (vis[node])
            continue;
        vis[node] = 1;
        for (pair<long long, long long> ed : g[node])
            if (dis[ed.first] > dis[node] + ed.second)
            {
                dis[ed.first] = dis[node] + ed.second;
                que.push({-dis[ed.first], ed.first});
            }
    }
    return dis;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);

    long long n, m, a, b, w;
    cin >> n >> m;
    vector<vector<pair<long long, long long>>> g;
    g.resize(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> w;
        a--, b--;
        g[a].push_back({w, 1});
        g[b].push_back({w, 1});
    }
    
    /* vector<long long> aux = dijkstra(g, 0);
    for (long long i = 0; i < aux.size(); i++)
    {
        cout << aux[i] << ' ';
    } */

    // Mostrar matriz
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cout << g[i][j].first << "," << g[i][j].second << ' ';
        }
        cout << '\n';
    }
}