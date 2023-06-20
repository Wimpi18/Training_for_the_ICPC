#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w;

    int i, j, ni, nj;

    cin >> h >> w;

    char cm[h][w];
    int im[h][w];

    for (int i = 0; i < h; i++)
    {

        for (int j = 0; j < w; j++)
        {
            cin >> cm[i][j];
            im[i][j] = 0;
        }
    }

    i = 0;
    j = 0;
    ni = i;
    nj = j;

    while (ni < h && ni >= 0 && nj < w && nj >= 0)
    {
        if (im[ni][nj] != 1)
        {
            im[ni][nj] = 1;
            i = ni;
            j = nj;
            switch (cm[ni][nj])
            {

            case 'U':
                ni = ni - 1;
                break;

            case 'L':
                nj = nj - 1;
                break;

            case 'D':
                ni = ni + 1;
                break;

            case 'R':
                nj = nj + 1;
                break;
            }
        }
        else
        {
            cout << -1 << '\n';
            return 0;
        }
    }

    cout << i + 1 << " " << j + 1 << '\n';
}