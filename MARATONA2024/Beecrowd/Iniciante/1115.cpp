#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _

    int x, y;

    while(cin>>x>>y)
    {
        if(x==0 || y==0){
            break;
        }else if(x>0 && y>0){
            cout<<"primeiro"<<endl;
        }else if(x>0 && y<0){
            cout<<"quarto"<<endl;
        }else if(x<0 && y>0){
            cout<<"segundo"<<endl;
        }else if(x<0 && y<0){
            cout<<"terceiro"<<endl;
        }
    }

    return 0;

}

