#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    int v;

    cin>>v;

    vector<int>n(10);

    n[0]=v;
    cout<<"N[0] = "<<n[0]<<endl;

    for(int i =1; i<10; i++){
      n[i] = n[i-1] *2;


        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}