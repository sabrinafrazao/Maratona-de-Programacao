#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _

    int n, x ,y;

    cin>>n;

   
    while(n--){

        cin>>x>>y;

        float d = static_cast<float>(x)/y;

        if(y==0){
            cout<<"divisao impossivel"<<endl;
           
        }else{
             
             cout<<fixed<<setprecision(1)<<d<<endl;
            
        }

    }

    return 0;
}