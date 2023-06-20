#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, hitPoint, nVoidAbsorp, mLigthStrike;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> hitPoint >> nVoidAbsorp >> mLigthStrike;
        while ((nVoidAbsorp > 0 || mLigthStrike > 0) && hitPoint > 0)
        {
            if (nVoidAbsorp > 0 && hitPoint > mLigthStrike * 10)
            {
                hitPoint = (hitPoint / 2) + 10;
                nVoidAbsorp--;
            }
            else
            {
                hitPoint = hitPoint - mLigthStrike * 10;
                mLigthStrike = 0;
            }
        }

        if (hitPoint > 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}