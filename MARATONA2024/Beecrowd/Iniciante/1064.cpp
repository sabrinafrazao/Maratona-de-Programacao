#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    vector<float>n(6);

    int c =0;
    float s = 0.0;
    for(int i = 0; i<6; i++){
        cin>>n[i];

        if(n[i]>0){
            c++;
            s += n[i];
        }
    }
    float m = s/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<m<<endl;

    return 0;

}