#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;


ll int bigmod(ll int b, ll int p, ll int m ){
     
     if(p == 0){
        return 1;
     }

     if(p%2 == 0){

        ll int resp = bigmod(b, p/2 ,m);

            return (resp*resp)%m;
        
     }else{
        ll int x, y;

        x= b%m;
        y = bigmod(b, p-1, m);

        return (x*y)%m;
    }
}




int main(){ _
    
    ll int b, p, m;

   while( cin>>b>>p>>m){

     cout<<bigmod(b,p,m)<<endl;
   }
    return 0;
}
