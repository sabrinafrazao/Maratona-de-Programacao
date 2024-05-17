#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, a,b,c;

    cin>>a>>b>>c>>n;


        if(a>0 && b>0 && c>0 && a+b+c >=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    return 0;
    
}