#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, d;
    string m;

    cin>>n;

    for(int i =0; i<n; i++){
        cin>>m>>d;

        for(int j=0; j<m.length(); ++j){
            m[j] = ((m[j] - 'A' - d + 26 )%26 + 'A');
        }
        cout<<m<<endl;
    }

    
    
    return 0;
}