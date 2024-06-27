#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){
    int a,b,c,d, h, min;

    cin>>a>>b>>c>>d;

    int inicio_min = a * 60 + b;
    int fim_min = c * 60 + d;

    if(fim_min <= inicio_min){
        fim_min += 24*60;
    }

    int dr = fim_min - inicio_min;

    h = dr / 60;
    min = dr % 60;

    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;

    return 0;

}