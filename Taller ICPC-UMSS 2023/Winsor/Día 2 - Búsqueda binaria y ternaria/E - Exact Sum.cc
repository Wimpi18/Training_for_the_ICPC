#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    long long n, x, m;
    while (cin >> n)
    {
        vector<long long> precios;
        pair<long long, long long> librosOptimos = {0, 1000002};
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            precios.push_back(x);
        }
        cin >> m;

        if (n == 2)
        {
            cout << "Peter should buy books whose prices are " << precios[0] << " and " << precios[1] << "." << '\n';
        }
        else
        {
            sort(precios.begin(), precios.end());
            for (long long i = 0; i < precios.size() - 1; i++)
            {
                long long low = i, high = precios.size() - 1, complemento = -1;
                while (low <= high)
                {
                    long long mid = (low + high) / 2;
                    if (precios[mid] <= m - precios[i])
                    {
                        complemento = precios[mid];
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
                // cout << "Encontro el siguiente complemento " << complemento << '\n';
                if (complemento == m - precios[i])
                {
                    if (complemento - precios[i] < librosOptimos.second - librosOptimos.first)
                    {
                        librosOptimos.first = precios[i];
                        librosOptimos.second = complemento;
                    }
                }
            }
            cout << "Peter should buy books whose prices are " << librosOptimos.first << " and " << librosOptimos.second << "." << '\n';
        }
        cout << '\n';
    }
}