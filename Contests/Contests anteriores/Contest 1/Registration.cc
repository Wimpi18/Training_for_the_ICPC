#include <iostream>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    bool res = true;
    for(int i=0; i<a.size(); i++){
        res &= a[i] == b[i];
    }
    cout<<(res ? "Yes" : "No")<<endl; //Si res es true entonces imprimir YES sino imprimir NO
    return 0;
}