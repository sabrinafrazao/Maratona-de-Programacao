#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n"
#define ll long long

using namespace std;

int main(){
    ll n;

    cin>>n;

    vector<ll>t(n);

    multiset<int> towers;
    for(int i = 0; i<n; i++){
        cin>>t[i];

        auto iter = towers.upper_bound(t[i]);

        if(iter != towers.end()){
            towers.erase(iter);
        }
        towers.insert(t[i]);

    }

    cout<<towers.size()<<endl;
    return 0;
   
}