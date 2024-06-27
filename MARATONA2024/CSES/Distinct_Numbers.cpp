#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    ll int n;

    cin>>n;

    vector<ll int>v(n);
    set<ll int>r;

    for(int i =0; i<n; i++){
        cin>>v[i];

        r.insert(v[i]);
    }

    int cont = 0;
    for(int i = 0; i<r.size(); i++){

        cont++;

    }

    cout<<cont<<endl;

    return 0;

}