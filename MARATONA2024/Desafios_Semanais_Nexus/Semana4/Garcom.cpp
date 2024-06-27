#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _
    int n, l, c;

    cin>>n;

    int cont =0; 

    for(int i=0; i<n; i++){
        cin>>l>>c;

        if(c<l){
            cont += c;
        }
    }

    cout<<cont<<endl;

    return 0;
}