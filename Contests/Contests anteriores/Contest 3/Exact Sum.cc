#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long  cant_libros, precio_libro, suma, mid, x, y;
    cin >> cant_libros;
    long long libros[cant_libros];

    for(long long i = 0; i < cant_libros; i++){
        cin >> precio_libro;
        libros[i] = precio_libro;
    }

    cin >> suma;

    sort(libros, libros + cant_libros);
    long long iz = 0, de = cant_libros-1;
    while(iz <= de){ //Encontrar menores a suma
        mid = (iz + de)/2;
        if(libros[mid] < suma){
            iz = mid + 1;
        } else if(libros[mid] == suma){
            break;
        } else {
            de = mid - 1;
        }
    }

    for(long long i = 0; i < mid; i++){
        for (long long j = i + 1; j <= mid; j ++){
            if(libros [i] + libros[j] == suma){
                x = libros[i];
                y = libros [j];
            }
        }
    }
    cout << "Peter should buy books whose prices are " << x << " and " << y << endl;
}