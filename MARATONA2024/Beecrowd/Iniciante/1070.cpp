#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _
    int x;

    cin>>x;

    if(x%2==0){
        x++;
    }

    for(int i=0; i<6; i++){
        cout<<x+2*i<<endl;
    }


    return 0;

}