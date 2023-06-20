#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long casos, ladoA, ladoB, resultado;
    cin >> casos;
    for (long long c = 0; c < casos; c++)
    {
        cin >> ladoA >> ladoB;
        if (ladoA == ladoB)
        {
            resultado = ladoA + ladoB;
            resultado *= resultado;
        }
        else if (ladoA == 1 || ladoB == 1)
        {
            if (ladoA == 1)
            {
                resultado = ladoB * ladoB;
            }
            else
            {
                resultado = ladoA * ladoA;
            }
        }
        else
        {
            if ((ladoA + ladoA) * (ladoA + ladoA) < (ladoB + ladoB) * (ladoB + ladoB))
            {
                resultado = (ladoA + ladoA) * (ladoA + ladoA);
            }
            else
            {
                resultado = (ladoB + ladoB) * (ladoB + ladoB);
            }
        }
        cout << resultado << '\n';
    }
}