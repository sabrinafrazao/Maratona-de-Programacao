#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    int cp;

    vector<float>n(6);
   cp =0;

  for(int i = 0; i<6; i++){

    cin>>n[i];

    if(n[i]>0){
        cp++;
    }
  }

  cout<<cp<<" valores positivos"<<endl;

    return 0;
}