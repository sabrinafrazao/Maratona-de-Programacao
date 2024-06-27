#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _ 

    int n, q, l, r, k, g, d;

    cin>>n>>q;

    vector<int>x(n);

    for(int i =0; i<n; i++){
        cin>>x[i];
    }

    for(int j=0; j<q; j++){
        cin>>l>>r>>k>>g>>d;
        l--;
        r--;

        vector<int> intervalo(x.begin() + l, x.begin() + r + 1);

        sort(intervalo.begin(), intervalo.end());

        int Kmenor = intervalo[k-1];

        int cont = 0;

        for(int i = l; i<=r; i++){
            if(x[i] == Kmenor){
                cont++;
            }
        }

        int aproxG = abs(cont - g);
        int aproxD = abs(cont - d);

        char ganhador;

        if(aproxG < aproxD){
            ganhador = 'G';

        }else if(aproxD<aproxG){
            ganhador= 'D';
        }else{
            ganhador = 'E';
        }

        cout<<Kmenor<<" "<<cont<<" "<<ganhador<<endl;

    }

    return 0;

}