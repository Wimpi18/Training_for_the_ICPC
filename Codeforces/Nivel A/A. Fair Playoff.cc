#include <iostream>
#include <math.h>
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
        int s1, s2, s3, s4;
        int ganador1, ganador2, perdedor1, perdedor2;
        cin >> s1 >> s2 >> s3 >> s4;
        if (s1 > s2)
        {
            ganador1 = s1;
            perdedor1 = s2;
        }
        else
        {
            ganador1 = s2;
            perdedor1 = s1;
        }
        if (s3 > s4)
        {
            ganador2 = s3;
            perdedor2 = s4;
        }
        else
        {
            ganador2 = s4;
            perdedor2 = s3;
        }
        if (max(perdedor1, perdedor2) > ganador1 || max(perdedor1, perdedor2) > ganador2)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}