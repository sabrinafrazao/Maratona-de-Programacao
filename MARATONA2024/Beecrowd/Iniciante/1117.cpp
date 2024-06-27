#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _
 
   float n1, n2;
   bool n1v = false, n2v = false;

   while (!n1v || !n2v)
   {
        float nota;

        cin>>nota;

        if(nota<0 ||nota>10 ){
            cout<<"nota invalida"<<endl;
        }else{
            if(!n1v){
                n1 = nota;
                n1v = true;
            }else if(!n2v){
                n2 = nota;
                n2v = true;
            }
        }
   }

   float m = (n1 + n2)/2.0;

   cout<<"media = "<<fixed<<setprecision(2)<<m<<endl;
   
    return 0;
}