#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    long long int a,b,c,d;

    cin>>a>>b>>c>>d;

    if(b>c && d>a && c+d > a+b && c>0 && d>0 && a%2==0){
       cout<<"Valores aceitos"<< endl;
    }else{
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}