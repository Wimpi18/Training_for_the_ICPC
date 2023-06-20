#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, num;
    cin >> n;
    int A[n];
    for(i = 0; i < n; i ++){
        int num;
        cin >> num;
        A[i] = num;
    }
    int x;
    cin >> x;
    int iz = 0, de = n-1;
    while(iz <= de){
        int mid = (iz + de)/2;
        if(A[mid] < x){
            iz = mid + 1;
        } else if(A[mid] == x){
            cout << "Se encontro la solucion" << endl;
            break;
        } else {
            de = mid - 1;
        }
    }
}