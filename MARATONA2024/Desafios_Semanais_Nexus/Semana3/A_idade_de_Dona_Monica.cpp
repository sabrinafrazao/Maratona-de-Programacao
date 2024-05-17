#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int m, a,b,c;

    cin>>m>>a>>b;

    c = m - a- b;

    if(a> b && a>c){
        cout<<a<<endl;
    } else if(b>a && b>c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }

    return 0;
}