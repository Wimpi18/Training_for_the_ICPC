#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x;
    cin >> x;
    int resultado = x;
    string tipo, color;
    string tipo_hoja[x];
    string color_hoja[x];
    for(int i = 0; i < x; i++){
        cin >> tipo >> color;
        tipo_hoja[i] = tipo;
        color_hoja[i] = color;
    }
    for (int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(tipo_hoja[i] == tipo_hoja[j] && color_hoja[i] == color_hoja[j] && tipo_hoja[j] != "delete"){
                tipo_hoja[j] = "delete";
                resultado--;
            }
        }
    }
    cout << resultado << endl;
}
/*int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("asd.txt", "r", stdin);
	// freopen("qwe.txt", "w", stdout);
	set<pair<string, string>> st;
	int n;
	cin>>n;
	string a, b;
	while(n--)
	{
		cin>>a>>b;
		st.insert({a, b});
	}
	cout<<st.size()<<'\n';
	return 0;
}*/