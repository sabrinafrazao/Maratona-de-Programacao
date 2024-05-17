#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int a, b, c;

    cin>>a>>b>>c;

    if( a == b + c || b == a + c || c == a+b || a == c || a == b || b == c){
        cout<<"S"<<endl;
    }else {
        cout<<"N"<<endl;
    }

    return 0;


}