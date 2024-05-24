#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";
#define ll long long

using namespace std;

int main(){
    ll int n, a;

    while(cin>>n>>a && n !=0 && a!=0){

        ll int papel[n], soma = 0;

        for(int i = 0; i<n; i++){
            cin>>papel[i];
            soma+= papel[i];
        }

        if(soma < a){
            cout<<"-.-"<<endl;
            continue;
        }
        if(soma == a){
            cout<< ":D"<<endl;
            continue;
        }

        double esq = 0, dir = 1000010, meio;
       
        while((dir - esq) > 0.000001){

            meio = (esq+dir)/2;

            double corte = 0;
            for(int i = 0; i<n; i++){
                if(papel[i]>meio){
                     corte += papel[i] - meio;
                }
                 
            }
            if(corte > a){
                esq = meio;
            }else if(corte < a){
                dir=meio;

            }
            
           
        }
        cout<<fixed<<setprecision(4)<<meio<<endl;

    }

    return 0;
}