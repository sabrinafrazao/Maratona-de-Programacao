#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int t, a, b, c;

    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>a>>b>>c;

        if(a+b>=10 || a+c >= 10 || b+c>=10){
                cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}