#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"


using namespace std;

int main(){ _

    int x, y;

    cin>>x>>y;

    int soma = 0;

    if(x>y){
        for(int i = y+1; i<x; i++){
             if(i%2!=0){
                soma+=i;
             }
             
        }
    }else{
         for(int i = x+1; i<y; i++){
             if(i%2!=0){
                soma+=i;
             }
             
        }
    }
    cout<<soma<<endl;

    return 0;
}
