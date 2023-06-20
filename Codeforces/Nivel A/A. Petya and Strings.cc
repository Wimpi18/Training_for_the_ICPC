#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string cadena1, cadena2;
    cin>>cadena1>>cadena2;
    for (int i = 0; i < cadena1.length(); i++)
    {
        if (toupper(cadena1[i]) < toupper(cadena2[i]))
        {
            cout<<-1<<"\n";
            return 0;
        }
        else if(toupper(cadena1[i]) > toupper(cadena2[i]))
        {
            cout<<1<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
}