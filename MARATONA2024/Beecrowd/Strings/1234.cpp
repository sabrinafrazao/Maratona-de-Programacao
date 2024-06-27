#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    string d;

    bool maiuscula;

    while(getline(cin, d)){
        maiuscula = true;

        for(int i =0; i<d.length(); i++){
            if(isalpha(d[i])){
                if(maiuscula){
                    d[i] = toupper(d[i]);
                }else{
                    d[i] = tolower(d[i]);
                }

                maiuscula = !maiuscula;
            }
        }

        cout<<d<<endl;
    }
    
    return 0;

}