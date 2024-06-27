#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    vector<float>n(100);

    for(int i =0; i<100; i++){
        cin>>n[i];

        if(n[i]<=10){

            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<n[i]<<endl;
        }
    }

    return 0;
}