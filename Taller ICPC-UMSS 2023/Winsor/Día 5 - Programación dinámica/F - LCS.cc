#include <bits/stdc++.h>
using namespace std;

string solve(string &menor, string &mayor, string res, int i, int j)
{
    if (j >= mayor.size())
        if (i >= menor.size())
            return res;
        else
            return solve(menor, mayor, res + menor[i], i++, j);
    if (menor[i] == mayor[j])
    {
        return solve(menor, mayor, res + menor[i], i++, j++);
    }
    else
    {
        string aux = solve(menor, mayor, res, i, j++);
        if (res.size() >= aux.size())
            return res;
        else
            return aux;
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("asd.txt", "r", stdin);
    // freopen("qwe.txt", "w", stdout);
    string s, t, res;
    cin >> s >> t;
    if (s.size() >= t.size())
    {
        res = solve(t, s, "", 0, 0);
    }
    else
    {
        res = solve(t, s, "", 0, 0);
    }
    cout << res;
}