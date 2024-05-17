#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    long long int x, digito, resto;
    cin>>x;
    cout<<x<<endl;

    while(x>9){
        digito = x/10;
        resto = x%10;
        x = digito*3 + resto;
        cout<<x<<endl;
                  
     } 
     
     

     return 0;
    
}