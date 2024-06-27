#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int m, n;

    int soma =0;

   while(cin>>m>>n &&  (m>0 && n>0)) {
        if(m>n){
            for(int i = n; i<=m; i++){
                soma+=i;
                cout<<i<<" ";
            }
        }else{
             for(int i = m; i<=n; i++){
                soma+=i;
                cout<<i<<" ";
            }

        }
        cout<<"Sum="<<soma<<endl
        soma =0;
   }

   return 0;
}