#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int niveles, nivX, nivY, niv;
    cin >> niveles >> nivX;
    set<int> st1;

    for (int i = 0; i < nivX; i++)
    {
        cin >> niv;
        st1.insert(niv);
    }

    cin >> nivY;
    for (int i = 0; i < nivY; i++)
    {
        cin >> niv;
        st1.insert(niv);
    }
    
    if (st1.size() == niveles)
    {
        cout << "I become the guy." << '\n';
    }
    else
    {
        cout << "Oh, my keyboard!" << '\n';
    }
}