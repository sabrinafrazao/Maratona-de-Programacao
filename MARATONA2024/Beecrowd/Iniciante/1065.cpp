#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){
    int a,b,c,d, e;

    cin>>a>>b>>c>>d>>e;

    int cont = 0;

    if(a%2==0){
        cont++;
    }
    if(b%2==0){
        cont++;
    }
    if(c%2==0){
        cont++;
    }
    if(d%2==0){
        cont++;
    }
    if(e%2==0){
        cont++;
    }


    cout<<cont<<" valores pares"<<endl;

    return 0;
}