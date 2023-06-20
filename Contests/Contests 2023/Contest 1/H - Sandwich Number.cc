#include <bits/stdc++.h>
#include <ctype.h>
#include <string>
using namespace std;

int recNum(string s)
{
    int num;
    // cout << "numero" << s <<endl;
    num = 0;
    if (s.length() != 6)
    {
        num = -1;
    }
    else
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            // cout << s[i] << endl;
            if (isalpha(s[i]))
            {
                num = -1;
                break;
            }
            else
            {
                num += (s[i] - '0') * int(pow(10, s.length() - (i + 1)));
                // cout << num <<endl;
            }
        }
    }

    return num;
}

int main()
{
    string S;
    cin >> S;

    int l;
    int num;

    // sacar l
    l = S.length();

    if (l >= 8)
    {
        if (isalpha(S[0]) && isalpha(S[l - 1]))
        {
            num = recNum(S.substr(1, l - 2));
            if (num >= 100000 && num <= 999999)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }
}
