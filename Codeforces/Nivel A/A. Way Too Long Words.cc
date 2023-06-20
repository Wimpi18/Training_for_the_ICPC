#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, letras_entre_espacios;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++)
    {   string abrev = "";
        cin >> word;
        //abrev = word[0] + (word.length() - 2) + word[word.length() - 1];
        if (word.length() > 10)
        {   letras_entre_espacios = word.length() - 2;
            abrev = abrev + word[0];
            abrev = abrev + to_string(letras_entre_espacios);
            abrev = abrev + word[word.length() - 1];
            cout << abrev << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}