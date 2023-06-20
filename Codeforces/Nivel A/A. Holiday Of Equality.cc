#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantCiudadanos, burles = 0, bienestar, numMayor = 0;
    cin >> cantCiudadanos;
    int array[cantCiudadanos];
    set<int> st;
    for (int i = 0; i < cantCiudadanos; i++)
    {
        cin >> bienestar;
        if (bienestar > numMayor)
        {
            numMayor = bienestar;
        }
        array[i] = bienestar;
        st.insert(bienestar);
    }
    if (st.size() == 1)
    {
        cout << 0 << '\n';
    }
    else
    {
        for (int i = 0; i < cantCiudadanos; i++)
        {
            burles += abs(numMayor - array[i]);
        }
        cout << burles << '\n';
    }
}