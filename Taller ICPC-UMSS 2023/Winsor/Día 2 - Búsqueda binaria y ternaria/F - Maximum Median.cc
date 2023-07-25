#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<long long> numeros;
    long long n, a, k, mid;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        numeros.push_back(a);
    }
    mid = (n - 1) / 2;
    if (n == 1)
    {
        cout << numeros[0] + k << '\n';
    }
    else
    {
        sort(numeros.begin(), numeros.end());
        for (long long i = 0; i < k; i++)
        {
            if (numeros[mid] + 1 <= numeros[mid + 1])
            {
                numeros[mid] = numeros[mid] + 1;
            }
            else
            {
                bool espacioEncontrado = false;
                for (long long j = mid + 1; j < numeros.size() - 1 && !espacioEncontrado; j++)
                {
                    if (numeros[mid + j] + 1 < numeros[mid + j + 1])
                    {
                        numeros[mid + j] = numeros[mid + j] + 1;
                        espacioEncontrado = true;
                    }
                }
            }
            for (long long i = 0; i < numeros.size(); i++)
            {
                cout << numeros[i] << " ";
            }
            cout << '\n';
        }
        cout << numeros[mid] << '\n';
    }
}