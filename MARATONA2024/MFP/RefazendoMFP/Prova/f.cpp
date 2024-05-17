#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, r;
    r=0;

    cin>>n;

    if(n>=8){
        r++;
        n-=8;
    }
    if(n>=4){
        r++;
        n-=4;
    }
    if(n>=2){
        r++;
        n-=2;
    }
    if(n==1){
        r++;

    }
    cout<<r<<endl;

    return 0;

}