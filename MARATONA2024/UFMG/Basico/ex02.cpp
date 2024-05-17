#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){
    int n;
    cin>>n;

    bool primo = true;

    if(n<=1){
        primo = false;
    }

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            primo = false;
        }
    }

    if(primo ==true){
        cout<<"sim"<< endl;
    }else{
        cout<<"nao"<<endl;
    }

    return 0;

    
}
