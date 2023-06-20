#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantHabitaciones, espacioOcupado, espacioMax, resultado = 0;
    cin >> cantHabitaciones;
    for (int i = 0; i < cantHabitaciones; i++)
    {
        cin >> espacioOcupado >> espacioMax;
        if (espacioOcupado + 2 <= espacioMax)
        {
            resultado++;
        }
    }
    cout << resultado << '\n';
}