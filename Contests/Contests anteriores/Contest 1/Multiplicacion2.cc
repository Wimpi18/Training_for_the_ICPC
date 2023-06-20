#include <iostream>
using namespace std;
int main(){
    double mul = 1;
    long long res = 1, a;
    long long e18 = 1000000000000000000;
    bool ce = false;
    int n;
    cin>>n;
    while(n--){
        cin>>a;
        if(!a){ //Es lo mismo que colocar (a == 0)
            ce = true;
        }
        if(res != -1){
            res *= a;
            mul *= a;
            if(res > e18 || mul > e18){
                res = -1;
            }
        }
    }
    if(ce){
        res = 0;
    }
    cout<<res<<endl;
    return 0;
}