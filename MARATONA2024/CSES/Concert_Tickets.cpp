#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main() { _

    ll int n, m;

    cin>>n>>m;

    multiset<int>h;
    vector<int>t(m);


    for(int i = 0; i<n; i++){
        int precos;
        cin>>precos;

        h.insert(precos);
    }

    for(int i = 0; i<m; i++){
        cin>>t[i];
    }

    for(int i = 0; i<m; i++){
        int ofertas = t[i];

        auto iterator = h.upper_bound(ofertas);

        if(iterator == h.begin()){
            cout<<-1<<endl;
        }else{
            --iterator;
            cout<<*iterator<<endl;
            h.erase(iterator);
        }


    }
   

    return 0;

}
