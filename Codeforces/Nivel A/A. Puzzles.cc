#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, f, res = 1001;
    vector<int> puzzles;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> f;
        puzzles.push_back(f);
    }
    sort(puzzles.begin(), puzzles.end());
    for (int i = 0; i < puzzles.size() - (n - 1); i++)
    {
        // cout << "evalua el  " << puzzles[i] << "    con el  " << puzzles[i + (n - 1)] << '\n';
        if (puzzles[i + (n - 1)] - puzzles[i] < res)
        {
            res = puzzles[i + (n - 1)] - puzzles[i];
        }
    }
    cout << res << '\n';
}