#include<bits/stdc++.h>
#define endl "\n";

using namespace std;

int main(){
  long long int n;
  int cnt, tam;
  string m;
  
  cin>>n;
  cin>>m;

  cnt =0;
  tam =1;
  for(int i=0; i<n; i++){
    if(m[i] == m[i-1]){
      tam++;
    }else {
    if(tam>1 && m[ i-1] == 'a'){
      cnt+=tam;
      }
       tam=1;
    }
   
  }

  if(tam>1 && m[n -1]== 'a'){
    cnt+=tam;
  }

  cout<<cnt<<endl;
  

  return 0;
}