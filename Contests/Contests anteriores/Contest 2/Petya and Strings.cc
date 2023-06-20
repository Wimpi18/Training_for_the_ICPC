#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    string palabra1, palabra2;
    int p1, p2, resultado;
    cin >> palabra1 >> palabra2;
    char diccionario_m[] = "abcdefghijklmnñopqrstuvwxyz";
    char diccionario_M[] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";

    for(int i = 0; i < palabra1.size(); i++){
        for (int j = 0; j <= 27 ; j++){
            if(palabra1[i] == diccionario_m[j] || palabra1[i] == diccionario_M[j]){
                p1 = j;
            }
            if(palabra2[i] == diccionario_m[j] || palabra2[i] == diccionario_M[j]){
                p2 = j;
            }
        }
        if(p1 == p2){
            resultado = 0;
        } else if(p1 < p2){
            resultado = -1;
            i = palabra1.size();
        } else if(p1 > p2){
            resultado = 1;
            i = palabra1.size();
        }
    }
    cout << resultado << endl;
}
/*int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("asd.txt", "r", stdin);
	// freopen("qwe.txt", "w", stdout);
	string a, b;
	cin>>a>>b;
	fore(i, 0, a.size())
	{
		if(a[i] < 'a' || a[i] > 'z')
			a[i] = a[i] - 'A' + 'a';
		if(b[i] < 'a' || b[i] > 'z')
			b[i] = b[i] - 'A' + 'a';
	}
	cout<<(a < b ? -1 : a > b ? 1 : 0)<<'\n';
	return 0;
}*/