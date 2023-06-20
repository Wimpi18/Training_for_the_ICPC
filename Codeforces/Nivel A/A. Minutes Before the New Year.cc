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
        int hr, min;
        cin >> hr >> min;
        int res = 0;
        if (hr >= 23)
        {
            res = 60 - min;
        }
        else
        {
            res = 60 - min + 60 * (23 - hr);
        }
        cout << res << '\n';
    }
}