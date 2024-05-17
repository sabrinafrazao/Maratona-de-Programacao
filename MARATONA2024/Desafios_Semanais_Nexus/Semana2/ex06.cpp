#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    string p;
    int n, l, hash;

    cin>>n;

    for(int i =0; i<n; i++){
        hash =0;
        cin>>l;

        for(int j =0; j<l; j++){

            cin>>p;

            for(int k=0; k<p.length(); ++k){

                hash+= (p[k] - 'A') + j + k; 
            }

        }

        cout<<hash<<endl;
    }

    return 0;
}