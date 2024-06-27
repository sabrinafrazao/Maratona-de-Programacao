#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    vector<int>v(10);

    for(int i = 0; i<10; i++){
        cin>>v[i];

        if(v[i]<0 || v[i] == 0){
            v[i] = 1;
        }

        cout<<"X["<<i<<"] = "<<v[i]<<endl;

    }

    return 0;

}