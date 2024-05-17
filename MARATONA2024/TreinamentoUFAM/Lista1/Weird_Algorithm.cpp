#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    long long int n;

    cin>>n;

    cout<<n<<endl;

    while(n!=1){
        if(n%2==0){
            n = n/2;
        }else{
            n = (n*3) +1;
        }
        cout<<n<<endl;
    }

}