#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int kCentimetro, kPorMes;
    cin >> kCentimetro;
    vector<int> arr;
    for (int i = 0; i < 12; i++)
    {
        cin >> kPorMes;
        arr.push_back(kPorMes);
    }
    sort(arr.begin(), arr.end());
    bool posible = false;
    int contador = 0, suma = 0;
    for (int i = arr.size()-1; i >= -1 && posible == false; i--)
    {
        if (suma >= kCentimetro)
        {
            posible = true;
        }
        else
        {
            contador++;
        }
        suma += arr[i];
    }
    if (posible)
    {
        cout << contador << '\n';
    }
    else
    {
        cout << "-1" << '\n';
    }
}