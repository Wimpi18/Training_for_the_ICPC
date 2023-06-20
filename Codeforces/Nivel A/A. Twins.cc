#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cMonedas, sumaTotal = 0, sumaMayor = 0;
    bool recogerMon = true;
    cin >> cMonedas;
    vector<int> valorMon;
    for (int i = 0; i < cMonedas; i++)
    {
        int a;
        cin >> a;
        sumaTotal += a;
        valorMon.push_back(a);
    }
    sort(valorMon.begin(), valorMon.end());

    if (valorMon.size() > 1)
    {
        for (int i = valorMon.size() - 1; i >= 0 && recogerMon; i--)
        {
            if (sumaMayor + valorMon[i] > sumaTotal-valorMon[i])
            {
                recogerMon = false;
                cout << valorMon.size() - i << '\n';
            }
            else
            {
                sumaTotal -= valorMon[i];
                sumaMayor += valorMon[i];
            }
        }
    }
    else
    {
        cout << 1 << '\n';
    }
}