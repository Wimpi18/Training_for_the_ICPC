#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, numCaja, res = 0;
    cin >> n;
    set<long long> menores;
    stack<long long> pila;
    string operacion;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> operacion;
        if (operacion == "add")
        {
            cin >> numCaja;
            menores.insert(numCaja);
            pila.push(numCaja);
        }
        else
        {
            // cout << "Comparo " << pila.top() << " con " << *menores.begin() << '\n';
            if (pila.top() == *menores.begin())
            {
                // cout << "Extraigo normal" << '\n';
                pila.pop();
                menores.erase(menores.begin());
            }
            else
            {
                // cout << "Reordeno" << '\n';
                res++;
                stack<long long> auxPila;
                for (auto it = menores.rbegin(); it != menores.rend(); ++it)
                {
                    auxPila.push(*it);
                }
                // cout << "Top " << auxPila.top() << " y menor es " << *menores.begin() << '\n';
                pila.swap(auxPila);
                pila.pop();
                menores.erase(menores.begin());
            }
        }
    }
    cout << res << '\n';
}