#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int a, b;

    cin>>a>>b;

    if( (a+b)%2==0){
        cout<<"Bino"<<endl;
    } else{
        cout<<"Cino"<<endl;

    }
    return 0;
}