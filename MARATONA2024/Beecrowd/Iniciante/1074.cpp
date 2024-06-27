#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    int n,x;

    cin>>n;

    for(int i =0; i<n; i++){
        cin>>x;

        if(x%2==0 && x>0){
            cout<<"EVEN POSITIVE"<<endl;
        }else if(x%2==0 && x<0){
             cout<<"EVEN NEGATIVE"<<endl;
        }else if(x%2!=0 && x>0){
            cout<<"ODD POSITIVE"<<endl;
        }else if(x%2!=0 && x<0){
            cout<<"ODD NEGATIVE"<<endl;
        }else if(x==0){
            cout<<"NULL"<<endl;
        }

    }
    return 0;
}