#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int x, y;

    while (cin>>x>>y)
    {
       if(x>y){
        cout<<"Decrescente"<<endl;
       }else if(y>x){
        cout<<"Crescente"<<endl;
       }
    }

    return 0;

}