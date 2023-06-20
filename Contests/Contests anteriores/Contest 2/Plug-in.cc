#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string palabra;
    cin >> palabra;
    for(int i = 0; i < (palabra.size() - 1); i++){
        if(palabra[i] == palabra[i + 1]){
            palabra.replace((i+1), 1, "");
            palabra.replace((i), 1, "");
            i = -1;
        }
    }   
    cout << palabra << "\n";
}
/*int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("asd.txt", "r", stdin);
	// freopen("qwe.txt", "w", stdout);
	string s, res = "";
	cin>>s;
	for(char ch : s)
	{
		res += ch;
		while(res.size() > 1 && res.back() == res[sz(res) - 2])
			res.pop_back(), res.pop_back();
	}
	cout<<res<<'\n';
	return 0;
}*/