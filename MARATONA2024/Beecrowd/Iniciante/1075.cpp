#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    int n;

    cin>>n;

    for(int i = 1; i<=10000; i++){
        if(i%n==2){
            cout<<i<<endl;
        }
    }

    return 0;

}