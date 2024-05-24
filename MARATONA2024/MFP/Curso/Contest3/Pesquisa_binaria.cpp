#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n"
#define ll long long

using namespace std;

int main(){
    ll int n, q;

    cin>>n>>q;

    vector<ll>x(n);

    for(int i = 0; i<n; i++){
        cin>>x[i];
    }

    vector<ll>y(q);
    for(int i = 0; i<q; i++){
        cin>>y[i];
    }

    for(int i = 0; i<q; i++){
        ll meta = y[i];
        ll esq = 0, dir = x.size() -1;
        ll meio;
        ll resp = -1;

          while(esq<=dir){
            meio = (esq + dir)/2;

            if(x[meio]==meta){
               resp = meio;
               dir =  meio -1; // esquerda
            } else if(x[meio]<meta){
                esq = meio +1; // direita 
            } else {
                dir = meio - 1; // esquerda
            } 
        }
        
            cout<<resp<<endl;
         
    }
    return 0;     

}
