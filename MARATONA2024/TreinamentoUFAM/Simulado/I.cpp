#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){
    int t, c, k, cont;
     cin>>t;

     while(t--){
        cin>>c>>k;

        string ass;
        cin>>ass;

        cont =0;

        for(int i =0; i<c; i++){
            if(ass[i] == '0' && ass[i+1]== '0'){
                cont++;
                if(cont>=k){
                    break;
                }
            }else{
                cont = 0;
            }
            
        }
        if(cont>=k){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
     }
     
     return 0;
}