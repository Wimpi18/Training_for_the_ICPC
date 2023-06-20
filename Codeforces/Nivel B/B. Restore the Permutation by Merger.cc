#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool numExiste(vector<int> array, int num);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n, num, it;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        vector<int> array;
        cin >> n;
        it = 0;
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> num;
            if (array.empty())
            {
                array.push_back(num);
                cout << num << '\n';
            }
            else if (!numExiste(array, num) == true)
            {
                array.push_back(num);
                cout << num << '\n';
            }
        }
    }
}

bool numExiste(vector<int> array, int num)
{
    int length = array.size();
    for (int i = 0; i < length; i++)
    {
        if (num == array[i])
        {
            return true;
        }
    }
    return false;
}