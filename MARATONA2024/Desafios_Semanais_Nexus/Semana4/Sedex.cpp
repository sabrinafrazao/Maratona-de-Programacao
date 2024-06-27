#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    ll int n, a, l, p;

    cin>>n;

    cin>>a>>l>>p;



    if(n<=a && n<=l && n<=p){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }


    return 0;

}