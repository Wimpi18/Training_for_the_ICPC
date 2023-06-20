#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool numExiste(vector<int> array, int num);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> n;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                n -= 2021;
            }
            else
            {
                n -= 2020;
            }
        }
        if (n == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
