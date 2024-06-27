#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){
   
   vector<int>v(3);

   for(int i=0; i<3; i++){
    cin>>v[i];
   }

  vector<int> ordem = v;

  sort(ordem.begin(), ordem.end());

  for(int i=0; i<3; i++){
      cout<<ordem[i]<<endl;
   }

   cout<<endl;

    for(int i=0; i<3; i++){
      cout<<v[i]<<endl;
   }


    return 0;
}