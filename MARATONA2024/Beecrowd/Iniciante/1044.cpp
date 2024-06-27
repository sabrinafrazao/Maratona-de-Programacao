#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){ _
 
    int a, b;

    cin>>a>>b;

    if(a>b && a%b==0 || b>a && b%a==0){
        cout<<"Sao Multiplos"<<endl;
    }else{
        cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;

}