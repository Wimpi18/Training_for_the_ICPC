#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long cant_filas, gusanos_fila, gusanos_jugosos, pos_gusano_jugoso;
    cin >> cant_filas;
    pair <long long [3], long long> pila[cant_filas];
    for(long long i = 0; i < cant_filas; i++){
        cin >> pila[i].first;
        pila[i].second = i + 1;
    }
    for(int i = 0; i < cant_filas; i++){
        cout << pila[i].first;
    }
    sort(pila, pila + cant_filas);
    cin >> gusanos_jugosos;
    for(int i = 0; i < gusanos_jugosos; i++){
        cin >> pos_gusano_jugoso;
    }

}