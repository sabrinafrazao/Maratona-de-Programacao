#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){

    int a, f, t;

    cin>>a>>f;

    if(f>a){
       t = f-a;
    }else{
        t = (24-a)  + f;
    }

    cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;

    return 0;
}