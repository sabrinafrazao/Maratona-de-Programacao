#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main() {
   
   int lados[4];

   for(int i=0; i<4; ++i) {
        cin >> lados[i];

   }

   sort(lados, lados+4);

   if(lados[0] + lados[1] > lados[2]|| lados[1] + lados[2] > lados[3] ){

    cout <<"S"<<endl;
   }else{
    cout<<"N"<<endl;
   }

}