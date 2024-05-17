#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

bool risada(const string &risos){
    string vogais;

    for(int i = 0; i< risos.length(); i++){
        char c = risos[i];

        if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u'  ){
            vogais+=c;
        }
    }
    
    return vogais== string(vogais.rbegin(), vogais.rend());

}

int main(){
    string risos;

    cin>>risos;

    if(risada(risos)){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }

    return  0;
}