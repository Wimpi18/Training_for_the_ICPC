#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool dificultadDificil = false;
    int personas, opinion;
    cin >> personas;
    for (int i = 0; i < personas; i++)
    {
        cin >> opinion;
        if (opinion == 1)
        {
            dificultadDificil = true;
        }
    }
    if (dificultadDificil)
    {
        cout << "HARD" << '\n';
    }
    else
    {
        cout << "EASY" << '\n';
    }
}