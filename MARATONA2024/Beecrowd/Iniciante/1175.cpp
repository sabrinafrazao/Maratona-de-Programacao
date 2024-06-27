#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    vector<int>v(20);

    for(int i = 0; i<20; i++){
        cin>>v[i];
    }
    
     for(int i = 0; i<10; i++){

         swap(v[i], v[19-i]); // Troca os valores dos dois elementos fornecidos 
     }

     for(int i = 0; i<20; i++){
        cout<<"N["<<i<<"] = "<<v[i]<<endl;
     }
    return 0;
}