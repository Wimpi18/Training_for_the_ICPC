#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, pos, cantImp, res;
    cin >> n >> pos;
    if (n % 2 == 0)
    {
        cantImp = n / 2;
        if (pos <= cantImp)
        {
            res = (pos*2)-1;
        }
        else
        {
            res = 2*(pos-cantImp);
        }
    }
    else
    {
        cantImp = (n / 2) + 1;
        if (pos <= cantImp)
        {
            res = (pos*2)-1;
        }
        else
        {
            res = 2*(pos-cantImp);
        }
    }
    cout << res << '\n';
}