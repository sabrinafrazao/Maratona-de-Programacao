#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(fallse);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){

    int t, a, b, c;

    cin>>t;
    vector<string> r;
    
    for(int i=0; i<t; i++){
        cin>>a>>b>>c;

        if(a < b && b < c){
            r.push_back("STAIR");
        }else if(a < b && b > c){
             r.push_back("PEAK");
            
        }else{
            r.push_back("NONE");
        }
    }

    for(string result:r){
        cout<<result<<endl;
    }

    return 0;

}