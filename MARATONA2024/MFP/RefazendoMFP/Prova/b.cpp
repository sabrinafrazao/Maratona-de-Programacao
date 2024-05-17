#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int x,x1,x2,x3,y,y1,y2,y3,A;

    cin>>x>>y;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    A = (max(x,x3) - min(x,x3)) * (max(x,x3) - min(x,x3)) ;

    cout<<A<<endl;

    return 0;



}