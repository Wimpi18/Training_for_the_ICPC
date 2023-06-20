#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nFila, nCol;
    cin >> nFila >> nCol;
    if ((nFila + nCol) % 2 == 0)
    {
        cout << "black" << '\n';
    }
    else
    {
        cout << "white" << '\n';
    }
    /* if (nFila % 2 == 1 && nCol % 2 == 1)
    {
        cout << "black" << '\n';
    }
    else
    {
        cout << "white" << '\n';
    } */
}