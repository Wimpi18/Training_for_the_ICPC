#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, w, h, n;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> w >> h >> n;
        int res = 0;
        while ((w % 2 == 0) || (h % 2 == 0))
        {
            if (w % 2 == 0)
            {
                w = w / 2;
                res++;
            }
            if (h % 2 == 0)
            {
                h = h / 2;
                res++;
            }
        }
        if (res > 0)
        {
            res *= 2;
        }
        else
        {
            res = 1;
        }

        if (res >= n)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}