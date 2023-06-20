#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n, a;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> n;
        set<int> tetris;
        bool esPosible = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            tetris.insert(a);
        }

        if (n != 1)
        {
            set<int>::iterator it1;
            set<int>::iterator it2;
            it1 = tetris.begin();
            it2 = it1++;
            for (int i = 0; i < tetris.size() && esPosible; i++, it2++)
            {
                if (*it1 + 1 == *it2)
                {
                    esPosible = false;
                }
                it1 = it2;
            }
        }

        if (esPosible)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}