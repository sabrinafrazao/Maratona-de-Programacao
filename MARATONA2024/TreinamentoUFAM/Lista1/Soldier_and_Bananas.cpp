#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){

    long long int n, t, soma;
    int k, w;

    cin>>k>>n>>w;
    soma=0;

    if(w==0){
        cout<<0<<endl;
    }else{
        for(int i = 0; i<=w; i++){
       
        soma += (i*k);
    }

        t = soma-n;

        if(t<0){
            cout<<0<<endl;
        }else{
            cout<<t<<endl;
        }

    }
    
    

    return 0;

}