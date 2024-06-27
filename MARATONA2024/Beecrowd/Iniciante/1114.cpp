#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _
    int senha;

    while(cin>>senha){
        if(senha==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }else{
            cout<<"Senha Invalida"<<endl;
        }
    }

    return 0;
    
}