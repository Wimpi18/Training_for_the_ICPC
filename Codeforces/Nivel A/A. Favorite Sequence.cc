#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        int nTam;
        cin >> nTam;
        vector<int> array;
        vector<int> arrayAux;
        for (int i = 0; i < nTam; i++)
        {
            int n;
            cin >> n;
            if ((nTam % 2 == 1 && i < (nTam / 2) + 1) || (nTam % 2 == 0 && i < nTam / 2))
            {
                array.push_back(n);
            }
            else
            {
                arrayAux.push_back(n);
            }
        }
        int j = arrayAux.size() - 1, k = 0;
        for (int i = 0; i < nTam; i++)
        {
            if (i % 2 == 0)
            {
                cout << array[k] << '\n';
                k++;
            }
            else
            {
                cout << arrayAux[j] << '\n';
                j--;
            }
        }
    }
}