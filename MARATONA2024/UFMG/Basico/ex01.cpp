#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n,r;

    r=1;

    cin>>n;

    if(n==0 || n==1){
        cout<<"1"<<endl;
    }else{
        for(int i=1; i<=n; ++i){
          r = r*i;
        
        }
        cout<<r<<endl;
        

    }
    return 0;
    
}