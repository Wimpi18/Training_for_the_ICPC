#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, k;
    string cadenaB;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> cadenaB;
        string cadenaA = "                                                                                                    ";
        k = 0;
        for (int j = 0; j < cadenaB.length(); j = j + 2)
        {
                cadenaA[k] =  cadenaB[j];
                k++;
        }
        cadenaA[k] = cadenaB[cadenaB.length() - 1];
        cout << cadenaA << '\n';
    }
}