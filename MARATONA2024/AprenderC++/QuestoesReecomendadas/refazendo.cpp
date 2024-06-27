#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
#define ll long long

using namespace std;

int main(){ _

   ll int k,n,w,q;

   cin>>k>>n>>w;

   int soma = 0;

  if(w==0){
    cout<<0<<endl;
  }else{
    for(int i = 1; i<=w; i++){

        soma+= i*k;
    }

    int t = soma - n;

    if(t<0){
        cout<<0<<endl;
    }else{
        cout<<t<<endl;
    }
  }


    return 0;

}