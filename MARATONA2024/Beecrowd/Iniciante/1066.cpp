#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    vector<int>v(5);

    int contP =0, contI =0, contN =0, contPos =0;

    for(int i = 0; i<5; i++){
        cin>>v[i];

        if(v[i]%2==0){
            contP++;
        }else{
            contI++;
        }
        if(v[i]<0){
            contN++;
        }else if(v[i]>0){
            contPos++;
        }
    }

    cout<<contP<<" valor(es) par(es)"<<endl;
    cout<<contI<<" valor(es) impar(es)"<<endl;
    cout<<contPos<<" valor(es) positivo(s)"<<endl;
    cout<<contN<<" valor(es) negativo(s)"<<endl;

    return 0;

}