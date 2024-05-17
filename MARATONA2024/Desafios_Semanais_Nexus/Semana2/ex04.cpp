#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    string d;
    bool maiscula;

    while(getline(cin, d)){
        maiscula = true;

        for(int i=0; i<d.length(); ++i){
            if(isalpha(d[i])){
                if(maiscula){
                    d[i] = toupper(d[i]);
                } else{
                    d[i] = tolower(d[i]);
                }

                maiscula = !maiscula;

            }
        }
        cout<<d<<endl;
    }

    return 0;

    
}