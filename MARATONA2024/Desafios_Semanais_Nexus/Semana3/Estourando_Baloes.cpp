#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){
   long long int x, n, flecha;

   flecha = 0;
   vector<int> h(1000001, 0);

   cin>>n;

   

   for(int i = 0; i<n; i++){
        cin>>x;

        if(h[x]> 0){
            h[x]--;

        }else{
            flecha++;

        
        }
        h[x - 1]++;

   }

   cout<<flecha<<endl;



}