#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){
    float a,b,c,t,cr,tp,q,r;

    cin>>a>>b>>c;

    t = (a*c)/2;

    cr = (3.14159 * (c*c));

    tp = (c * (a+b))/2;

    q = b*b;

    r = a*b;

    cout << "TRIANGULO: "<< fixed << setprecision(3) << t << endl;
    cout <<"CIRCULO: " << fixed << setprecision(3) << cr << endl;
    cout <<"TRAPEZIO: " << fixed << setprecision(3) <<tp << endl;
    cout <<"QUADRADO: " << fixed << setprecision(3) << q << endl;
    cout <<"RETANGULO: " << fixed << setprecision(3) << r << endl;

   return 0;
}