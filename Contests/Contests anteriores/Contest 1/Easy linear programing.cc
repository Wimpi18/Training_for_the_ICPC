#include <iostream>
using namespace std;
int main(){
    int a, b, c, k;
    int res = 0;
    cin>>a>>b>>c>>k;
    while (k > 0){
        if(a){ //Es lo mismo que colocar (a > 0) o (a != 0)
            a--;
            res++;
        } else if(b){
            b--;
        } else {
            res--;
        }
        k--;
    }
    cout<<res<<endl;
    return 0;
}