#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"

using namespace std;

int main(){ _
    int n, a;

    cin>>n;

    stack<int>x;

    int soma =0;

     for (int i = 0; i < n; i++){
        cin>>a;

        if(a==0){
            soma -= x.top();
            x.pop();
        }else{
            soma+=a;
            x.push(a);
        }
     }


    cout<<soma<<endl;

    return 0;

}