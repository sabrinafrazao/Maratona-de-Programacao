#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main() { _

    ll int x, n;

    cin>>x>>n;

    vector<ll>d(n);

    for(int i = 0; i<n; i++){
        cin>>d[i];
  
    }
   
    priority_queue<ll, vector<ll>, greater<ll>>menorBotao(d.begin(), d.end());

    ll int custo =0;

    while (menorBotao.size()>1){

        ll int primeiro = menorBotao.top();
        menorBotao.pop();
        ll int segundo = menorBotao.top();
        menorBotao.pop();

        ll int custoAtual = primeiro + segundo;

        custo += custoAtual;

        menorBotao.push(custoAtual);
        
    }

    cout<<custo<<endl;
    


    return 0;

}