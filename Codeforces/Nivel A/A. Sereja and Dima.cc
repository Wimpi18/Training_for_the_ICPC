#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tam;
    deque<int> cartas;
    int jugadores[2];
    jugadores[0] = 0;
    jugadores[1] = 0;

    cin >> tam;
    for (int i = 0; i < tam; i++)
    {
        int valor;
        cin >> valor;
        cartas.push_back(valor);
    }
    int i = 0;
    while (!cartas.empty())
    {
        if (cartas.size() == 1)
        {
            jugadores[i] = jugadores[i] + cartas[0];
            cartas.pop_back();
        }
        else if (cartas[0] > cartas[cartas.size() - 1])
        {
            jugadores[i] = jugadores[i] + cartas[0];
            cartas.pop_front();
        }
        else
        {
            jugadores[i] = jugadores[i] + cartas[cartas.size() - 1];
            cartas.pop_back();
        }

        if (i == 0)
        {
            i++;
        }
        else
        {
            i--;
        }
    }
    for (i = 0; i < 2; i++)
    {
        cout << jugadores[i] << '\n';
    }
}