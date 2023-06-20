#include <iostream>
#include <bits/basic_ios.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num, k;
    cin >> num;
    k = num / 2;
    cout << k << '\n';
    if (num % 2 == 0)
    {
        for (int i = 0; i < k; i++)
        {
            cout << 2 << '\n';
        }
    }
    else
    {
        for (int i = 0; i < k - 1; i++)
        {
            cout << 2 << '\n';
        }
        cout << 3 << '\n';
    }
}