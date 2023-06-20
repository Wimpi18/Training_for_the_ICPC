#include <iostream>
using namespace std;
int main(){
    int a, res;
    for(int i=0; i<5; i++){
        cin>>a;
        if(a == 0){
            res = i + 1;
        }
    }
    cout<<res<<endl;
    return 0; 
}