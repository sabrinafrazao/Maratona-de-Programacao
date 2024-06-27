#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){ _
    float a, b, c;

    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a){
        float p = a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<p<<endl;
    }else{
        float A = ((a+b)*c)/2.0;
         cout<<"Area = "<<fixed<<setprecision(1)<<A<<endl;

    }

    return 0;

}