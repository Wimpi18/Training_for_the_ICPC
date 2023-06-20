#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int money, billetes = 0;
    cin >> money;
    while (money != 0)
    {
        if (money - 100 >= 0)
        {
            money -= 100;
        }
        else if (money - 20 >= 0)
        {
            money -= 20;
        }
        else if (money - 10 >= 0)
        {
            money -= 10;
        }
        else if (money - 5 >= 0)
        {
            money -= 5;
        }
        else if (money - 1 >= 0)
        {
            money -= 1;
        }
        billetes++;
    }
    cout << billetes << '\n';
}