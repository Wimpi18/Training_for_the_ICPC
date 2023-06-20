#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tamSub, tam, numLetDist;
    char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                  'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    cin >> casos;

    for (int c = 0; c < casos; c++)
    {
        cin >> tam >> tamSub >> numLetDist;
        int ts = 0, nld = 0;
        string res = "";
        for (int i = 0; i < tam; i++, ts++, nld++)
        {
            if (ts < tamSub)
            {
                if (nld < numLetDist)
                {
                    res += abc[nld];
                }
                else
                {
                    nld = 0;
                    res += abc[nld];
                }
            }
            else
            {
                ts = 0, nld = 0;
                res += abc[nld];
            }
        }
        cout << res << '\n';
    }
}