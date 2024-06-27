#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    int n;

    cin>>n;

    for(int i = 1; i<=n; i++){
        
        if(i%2==0){
            ll int r = i *i;

            cout<<i<<"^"<<"2"<<" = "<<r<<endl;
        }


    }

    return 0;

}