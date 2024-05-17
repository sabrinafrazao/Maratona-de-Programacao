#include<bits/stdc++.h>

#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl '\n';

using namespace std;

int main(){
    int m, n, a, b, c;

    cin >> m >> n;

    a = (m * m) - (n * n);

    b = 2*m*n;

    c = (m*m) + (n*n);

    cout << a << ' ' << b << ' ' << c << endl;

    return 0;

}