#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long tam = 2e7 + 1;
bitset<tam> criba;
vector<long long> primos;
void init_criva()
{
    criba.set();
    criba[0] = criba[1] = 0;
    for (int i = 2; i * i < tam; i++)
    {
        if (criba[i])
        {
            for (int j = i * i; j < tam; j += i)
                criba[j] = 0;
            primos.push_back(i);
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    long long s;
    init_criva();

    while (cin >> s)
    {
        long long p1, p2;
        for (long long i = 0; i < primos.size() - 1 && s > 0; i++)
        {
            if (primos[i + 1] - primos[i] == 2)
            {
                s--;
            }
            if (s == 0)
            {
                p1 = primos[i];
                p2 = primos[i + 1];
                cout << "(" << p1 << ", " << p2 << ")" << '\n';
            }
        }
    }
}