#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long N, M, x, res = 0;
    set<long long> cdN;
    cin >> N >> M;
    for (long long i = 0; i < N; i++)
    {
        cin >> x;
        cdN.insert(x);
    }

    for (long long i = 0; i < M; i++)
    {
        cin >> x;
        if (cdN.count(x) == 1)
        {
            res++;
        }
    }
    cin >> N >> M;
    cout << res << '\n';
}