#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(faalse);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _

    float s,imp;

    cin>>s;

    imp = 0.0;

    if(s<=2000.00){
        cout<<"Isento"<<endl;

    }else{
        if(s>2000.00 && s<=3000.00){
            imp += (s - 2000.00) * 0.08;

        }else if(s>3000.00 && s<=4500.00){
            imp += (3000.00 - 2000.00) * 0.08;
            imp += (s - 3000.00)*0.18;

        }else if(s>4500.00){
            imp += (3000.00 - 2000.00) * 0.08;
            imp += (4500.00 - 3000.00)*0.18;
            imp+= (s-4500.00)* 0.28;

        }

        cout<<"R$ "<<fixed<<setprecision(2)<<imp<<endl;

    }
    

    return 0;
}