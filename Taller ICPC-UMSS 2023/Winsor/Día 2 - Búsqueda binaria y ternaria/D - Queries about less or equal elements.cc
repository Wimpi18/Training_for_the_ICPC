#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m, num;
    cin >> n >> m;
    vector<long long> a;
    for (long long i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());

    for (long long i = 0; i < m; i++)
    {
        cin >> num;
        long long low = 0, high = a.size() - 1, res = 0;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            if (a[mid] <= num)
            {
                res = mid + 1;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << res << " ";
    }
}