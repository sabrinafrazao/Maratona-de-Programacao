#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, cnt, t;

    cin>>n; 
    
    vector<int> a(n), b(n), c(n);

    for(int i =0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];

    }
   
    cnt=0;
     for(int i =0; i<n; i++){
    
        t = a[i] + b[i] + c[i];
        if(t>1){
            cnt++;
        }
     }


    cout<<cnt<<endl;
    return 0;
}