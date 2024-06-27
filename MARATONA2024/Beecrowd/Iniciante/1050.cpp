#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"

using namespace std;

int main(){ _

    int d;
    string c;

    cin >> d;

    switch (d) {
        case 61:
            c = "Brasilia";
            break;
        case 71:
            c = "Salvador";
            break;
        case 11:
            c = "Sao Paulo";
            break;
        case 21:
            c = "Rio de Janeiro";
            break;
        case 32:
            c = "Juiz de Fora";
            break;
        case 19:
            c = "Campinas";
            break;
        case 27:
            c = "Vitoria";
            break;
        case 31:
            c = "Belo Horizonte";
            break;
        default:
            c = "DDD nao cadastrado";
            break;
    }

    cout << c << endl;

    return 0;
}
