//  Verificar o código e tentar entender a questão 
#include <bits/stdc++.h>

using namespace std;
 
int main()
{   
    long long int  t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector < long long int > v;
        for(long long int i = 0 ; i < k ; i++) {
            v.push_back(n-i);
        }
        for(long long int i = 0 ; i < (n-k) ; i++) {
            v.push_back(i+1);
        }
        for(long long int i = n-1 ; i >= 0 ; i--) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;     
 }