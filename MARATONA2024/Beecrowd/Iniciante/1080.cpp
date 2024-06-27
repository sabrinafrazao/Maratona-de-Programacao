#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    vector<int>n(100);

    int maior = 0, p;

    for(int i = 0; i<100; i++){
        cin>>n[i];

        if(maior<n[i]){
            maior = n[i];
            p = i+1;
        }

    }
    cout<<maior<<endl;
    cout<<p<<endl;

    return 0;
}