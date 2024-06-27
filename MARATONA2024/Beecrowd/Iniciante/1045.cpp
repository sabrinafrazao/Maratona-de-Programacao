#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _
    float a, b, c;

    cin >> a >> b >> c;

    vector<float> n = {a, b, c};

    sort(n.begin(), n.end(), greater<float>());

    a = n[0];
    b = n[1];
    c = n[2];

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if ((a * a) == (b * b) + (c * c)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((a * a) > (b * b) + (c * c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((a * a) < (b * b) + (c * c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}
