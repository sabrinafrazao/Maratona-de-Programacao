#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

    ll int n;
    
    while (cin>>n, n!=0){
            
        int soma = n;

        while (soma>=10)
        {
            int temp = soma;
            soma = 0;
            while (temp>0)
            {
                soma+=temp%10;
                temp/= 10;
            }
            
        }
        
      cout<<soma<<endl;
    }
    

    return 0; 

}