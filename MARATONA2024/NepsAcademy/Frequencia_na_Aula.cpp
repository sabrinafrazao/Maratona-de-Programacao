#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    int n;

    cin>>n;

    vector<int>lista(n);

    for(int i = 0; i<n; i++){
        cin>>lista[i];
    }

    set<int>resp;
    for(int i = 0; i<n; i++){
        resp.insert(lista[i]);
    }

    int cont = 0;

     for(int i = 0; i<resp.size(); i++){
            cont++;
     }

     cout<<cont<<endl;

     return 0;


}