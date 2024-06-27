#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _

    int x, y, soma=0;;

    cin>>x>>y;

    if(x>y){
        for(int i = y; i<=x; i++){
            if(i%13!=0){
                soma += i;
            }
        }
    }else{
        for(int i = x; i<=y; i++){
            if(i%13!=0){
                soma += i;
            }
        }
    }

    cout<<soma<<endl;

    return 0;
    
}