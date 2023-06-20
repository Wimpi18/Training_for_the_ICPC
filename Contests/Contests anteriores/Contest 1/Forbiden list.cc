#include <iostream>
using namespace std;
int ar[102];
int main(){
    int x,n;
    cin>>x>>n;
    int a;
    for(int i = 0; i < n; i++){
        cin>>a;
        ar[a] = 1;
    }
    int suma = 1000, pos;
    for(int i = 0; i < 102; i++){
        if(!ar[i] && abs(x-i) < suma){
            suma = abs(x-i);
            pos = i;
        }
    }
    cout<<pos<<endl;
    return 0; //Averiguar funcion pair
}