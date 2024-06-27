#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _
    int n;
    float a, b, c;

    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a>>b>>c;

        float media = ((2*a) + (3*b) + (5*c))/ 10.0;

        cout<<fixed<<setprecision(1)<<media<<endl;
    }

    return 0;

}