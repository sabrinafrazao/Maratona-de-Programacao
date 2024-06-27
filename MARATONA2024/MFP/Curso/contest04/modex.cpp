#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;


ll int modex(ll int x, ll int y, ll int n){
    
    if(y==0){
        return 1;
    }

    if(y%2==0){
        ll int z = modex(x, y/2, n);

        return (z*z)%n;

    } else{
        ll int a, b;

        a = x%n;
        b = modex(x, y-1, n);

        return (a*b)%n;
    }
}

int main(){ _

    ll int  c, x,n, y;

    cin>>c;

    while (c--)
    {
        cin>>x>>y>>n;
        cout<<modex(x, y, n)<<endl;
    }
    
    return 0;

}