#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){

    string a;

    cin >> a;

    if(a[0] == 'X' && a[1] == 'X' && a[2]=='O' || a[0] == 'O' && a[1] == 'X' && a[2]=='X'){
        cout << "Alice"<<endl;
    }else{
              if(a[0]=='X' && a[1]=='O' && a[2]== 'X' ){
                cout <<"*"<<endl;
              }
              else{
                cout << "?" <<endl;
              }
            
        }
    

    return 0;
}