#include <iostream>
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
        int n, x;
        cin >> n >> x;
        int numApartment = 2;
        int res = 1;
        while (numApartment < n)
        {
            numApartment += x;
            res++;
        }
        cout << res << '\n';
    }
}