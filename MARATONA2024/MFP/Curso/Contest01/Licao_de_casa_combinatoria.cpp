#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; i++) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;

        // Ordena a, b, c em ordem crescente
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        a = arr[0];
        b = arr[1];
        c = arr[2];

        // Condição para verificar se m está dentro do intervalo especificado
        if (c - (a + b + 1) <= m && m <= a + b + c - 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}