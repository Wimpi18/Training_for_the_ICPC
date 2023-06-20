#include <iostream>
using namespace std;
int fposSigWub(string, int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string remix, subString = " ", res;
    cin >> remix;
    for (int i = 0; i < remix.size(); i = i + 3)
    {
        subString = remix.substr(i, 3);
        //cout << "comparo    " << subString << "    con el patron" << '\n';
        if (subString != "WUB")
        {
            int posSigWub = fposSigWub(remix, i);
            //cout << "el siguiente w     " << posSigWub << '\n';
            res += remix.substr(i, posSigWub - i) + " ";
            i = posSigWub;
        }
    }
    cout << res << '\n';
}

int fposSigWub(string cadena, int i)
{
    bool existeWub = false;
    for (i; i < cadena.size() && !existeWub; i++)
    {
        if (cadena.substr(i, 3) == "WUB")
        {
            existeWub = true;
            return i;
        }
    }
    return cadena.size();
}