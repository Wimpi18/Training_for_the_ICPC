#include <bits/stdc++.h>
using namespace std;

bool divisor(long long int e)
{
    bool res;

    res = false;

    if (e % 2 != 0)
    {
        return true;
    }
    else
    {
        while (e > 1 && e % 2 == 0)
        {
            e = e / 2;
        }
    }


    if(e != 1){
        return true;
    } else{
        return false;
    }
    // for (long long int i = 1; 2 * i + 1 <= e; i++)
    // {
    //     if (e % (2 * i + 1) == 0)
    //     {

    //         res = true;
    //         break;
    //     }
    // }

    return res;
}

int main()
{
    int t;
    long long int e;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        cin >> e;

        if (divisor(e))
        {

            cout << "YES" << '\n';
        }
        else
        {

            cout << "NO" << '\n';
        }
    }
}