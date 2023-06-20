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
        int tamArray, a;
        cin >> tamArray;
        int array[tamArray];
        for (int i = 0; i < tamArray; i++)
        {
            cin >> a;
            array[i] = a;
        }
        
    }
}