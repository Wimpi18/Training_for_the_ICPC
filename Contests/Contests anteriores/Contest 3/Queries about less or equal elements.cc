#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long tam_A, tam_B, num, mid, res;
    cin >> tam_A >> tam_B;
    long long A[tam_A];
    long long B[tam_B];
    for(long long i = 0; i < tam_A; i++){
        cin >> num;
        A[i] = num;
    }
    for(long long i = 0; i < tam_B; i++){
        cin >> num;
        B[i] = num;
    }
    sort(A, A + tam_A);
    for(long long x : B){
        long long iz = 0;
        long long de = tam_A - 1;
        while(iz <= de){ //Encontrar menores a suma
            mid = (iz + de)/2;
            if(A[mid] <= x){
                res = mid + 1;
                iz = mid + 1;
            }
            if(x < A[mid]){
                de = mid - 1;
            }
        }
        cout << res << '\n';
    }
}