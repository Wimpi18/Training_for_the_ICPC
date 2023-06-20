#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string palabra;
    cin >> palabra;
    palabra[0] = toupper(palabra[0]);
    cout << palabra << '\n';
}