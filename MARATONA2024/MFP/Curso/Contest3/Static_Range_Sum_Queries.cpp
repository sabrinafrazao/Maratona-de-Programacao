#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n"
#define ll long long

using namespace std;

int main(){
    ll int n, q;

    cin>>n>>q;

    vector<ll> x(n+1, 0); // Indice 0 é ignorado

    for(int i=1; i<=n; i++){
        cin>>x[i];
    }

    vector<ll> prefix_sum(n+1, 0);
    for(int i=1; i<=n; i++){
        prefix_sum[i] = prefix_sum[i-1] + x[i];
    }

    for(int i = 0; i<q; i++){
        int a, b;

        cin>>a>>b;

        cout<<prefix_sum[b] - prefix_sum[ a - 1] << endl;
    }

    return 0;
    
}