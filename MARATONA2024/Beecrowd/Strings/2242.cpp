#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;


bool risadas(string &risos){
    char c;
    string vogais;

    for(int i =0; i<risos.length(); i++){
        c = risos[i];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vogais+=c;
        }
    }

    return vogais == string(vogais.rbegin(), vogais.rend());
}

int main(){ _

    string risos;

    cin>>risos;
    
    if(risadas(risos)){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }

    return 0;
}