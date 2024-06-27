#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    ll int n, maior, seg_maior;

    cin>>n;

    vector<ll int>a(n);

    maior = -1, seg_maior = -1;
    for(int i =0; i<n; i++){

        cin>>a[i];
    }

    for(int i =0; i<n; i++){

         if(a[i]>maior){
            seg_maior = maior;
            maior = a[i];
        }else if(a[i]>seg_maior){
            seg_maior = a[i];
        }

    }

    vector<ll int> resp(n);

    for(int i = 0; i<n; i++){
        if(a[i]==maior){
            resp[i]= seg_maior;
        }else{
            resp[i] = maior;
        }

        cout<<resp[i]<<endl;
    }
    
    return 0;


}