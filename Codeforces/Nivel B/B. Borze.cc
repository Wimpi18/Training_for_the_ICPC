#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string num;
    string res = "";
    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {

        if (num[i] == '.')
        {
            res += "0";
        }
        else if (i - num.length() >= 2)
        {
            if (num[i] == '-' && num[i + 1] == '-')
            {
                res += "2";
            }
            else
            {
                res += "1";
            }
            i++;
        }
        else
        {
            res += "0";
        }
    }
    cout << res << '\n';
}