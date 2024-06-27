#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){
    float sal, Nsal, rj;
    int p;


    cin>>sal;


    if(sal <=400.00){
        rj = (15.0/100)*sal;
        Nsal = sal + rj;
        p = 15;
    } else if( sal>400.01 && sal <= 800.00){
        rj = (12.0/100)*sal;
        Nsal = sal + rj;
        p=12;
    }else if( sal>800.01 && sal <= 1200.00){
        rj = (10.0/100)*sal;
        Nsal = sal + rj;
        p=10;
    }else if( sal>1200.01 && sal <= 2000.00){
        rj = (7.0/100)*sal;
        Nsal = sal + rj;
        p=7;
    }else {
        rj = (4.0/100)*sal;
        Nsal = sal + rj;
        p=4;
    }

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<Nsal<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rj<<endl;
    cout<<"Em percentual: "<<p<<" %"<<endl;

    return 0;
    
}