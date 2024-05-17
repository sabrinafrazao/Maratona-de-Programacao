#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, c;
    
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];

    }

    for(int i=0; i<n; i++){
        c =0;
        if(a[i]==1){
            c++;
        }
        if(i+1<n && a[i + 1]==1){
            c++;
        }
        if(i-1<n && a[i-1]==1){
            c++;
        }

        cout<<c<<endl;
    }

    return 0;
}