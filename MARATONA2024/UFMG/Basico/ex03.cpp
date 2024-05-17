#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){

    int t,a,b, qtd;
    qtd=0;
    cin >> t;

    vector<pair<int, int>> entrada;
    vector<int> r;

   for(int i=0; i<t; i++){
    cin>>a>>b;
    entrada.push_back({a, b});
   }

   for(int i=0; i<t; i++){
    a = entrada[i].first;
    b = entrada[i].second;

    if(a%b==0){
        r.push_back(0);
    }else{
        qtd = b-(a%b);
        r.push_back(qtd);
    }
   }

   for(int i=0; i<t; i++){
    cout<<r[i]<<endl;
   }

   return 0;  

}