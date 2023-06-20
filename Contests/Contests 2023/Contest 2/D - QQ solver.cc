#include <typeinfo>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "";
    int x1;
    int x2;
    cin >> s;
    sscanf(s.substr(0, 1), "%d", &x1);
    sscanf(s.substr(1, 2), "%d", &x2);
    // int x = stoi(c);
    cout << (x1 * x2) << '\n';
}