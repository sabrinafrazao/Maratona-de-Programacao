#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, cnt, c;

    cin>>n;

    cnt=0;

    for(int i=0; i<n; i++){
        cin>>c;
        if(c!=1){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return  0;
}