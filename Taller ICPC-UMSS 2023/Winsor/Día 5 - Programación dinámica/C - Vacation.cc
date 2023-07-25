#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> vis;
long long solve(vector<vector<long long>> &actividades, long long n, long long opcion)
{
    if (n == 0)
        return 0;
    if (vis[actividades.size() - n][opcion - 1] == 0)
    {
        if (opcion == 1)
        {
            vis[actividades.size() - n][opcion - 1] = actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 2), solve(actividades, n - 1, 3));
            return vis[actividades.size() - n][opcion - 1];
            // return actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 2), solve(actividades, n - 1, 3));
        }
        else if (opcion == 2)
        {
            vis[actividades.size() - n][opcion - 1] = actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 1), solve(actividades, n - 1, 3));
            return vis[actividades.size() - n][opcion - 1];
            // return actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 1), solve(actividades, n - 1, 3));
        }
        else
        {
            vis[actividades.size() - n][opcion - 1] = actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 1), solve(actividades, n - 1, 2));
            return vis[actividades.size() - n][opcion - 1];
            // return actividades[actividades.size() - n][opcion - 1] + max(solve(actividades, n - 1, 1), solve(actividades, n - 1, 2));
        }
    }
    else
    {
        return vis[actividades.size() - n][opcion - 1];
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    long long n, a, b, c, res = 0;
    cin >> n;
    vis.resize(n, vector<long long>(3));
    vector<vector<long long>> actividades(n, vector<long long>(3));
    for (long long i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        actividades[i][0] = a;
        actividades[i][1] = b;
        actividades[i][2] = c;
    }

    if (n == 1)
    {
        res = max(max(a, b), c);
    }
    else
    {
        for (long long i = 1; i <= 3; i++)
        {
            res = max(res, solve(actividades, n, i));
        }
    }
    cout << res;
    /* for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < 3; j++)
        {
            cout << actividades[i][j] << ' ';
        }
        cout << '\n';
    } */
}