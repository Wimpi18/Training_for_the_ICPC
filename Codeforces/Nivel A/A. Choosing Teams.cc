#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantEstudiantes, kCampeonatos, iCampeonatos, participantes = 0;
    cin >> cantEstudiantes >> kCampeonatos;
    for (int i = 0; i < cantEstudiantes; i++)
    {
        cin >> iCampeonatos;
        if (iCampeonatos + kCampeonatos <= 5)
        {
            participantes++;
        }
    }
    cout << participantes / 3 << '\n';
}