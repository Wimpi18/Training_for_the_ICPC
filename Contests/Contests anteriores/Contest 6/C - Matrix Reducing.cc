#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nFilaA, nColA, nFilaB, nColB, valor;

    cin >> nFilaA >> nColA;
    vector<vector<int>> A;
    for (int j = 0; j < nFilaA; j++)
    {
        for (int k = 0; k < nColA; k++)
        {
            cin >> valor;
            
        }
    }

    for (int j = 0; j < nFilaA; j++)
    {
        for (int k = 0; k < nColA; k++)
        {
            cout << A[j][k] << '\n';
        }
    }

    /* cin >> nFilaB >> nColB;
    int B[nFilaB][nColB];
    for (int j = 0; j < nFilaB; j++)
    {
        for (int k = 0; k < nColB; k++)
        {
            cin >> valor;
            B[j][k] = valor;
        }
    }

    int n = 0, m = 0;
    for (int i = 0; i < nFilaA; i++)
    {
        for (int j = 0; i < nColA; j++)
        {
            if (A[i][j] == B[n][m])
            {
            }
        }
    } */
}