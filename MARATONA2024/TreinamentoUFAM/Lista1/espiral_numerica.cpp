#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    int t;
    ll e, x;

    cin>>t;

    while (t--)
    {
       cin>>e>>x;


       ll res;

       if(e>=x){
        if(e%2==0){
            res = e*e - x+1;
        }else{
            res = (e-1)*(e-1) + x;
        }
       }else{
            if(x%2!=0){
                res = x*x - e+1;
            }else{
                res = (x-1) * (x-1) +e;
            }
       }

       cout<<res<<endl;
    }

    return 0;
    
}