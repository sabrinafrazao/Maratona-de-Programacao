#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define undl "\n"

using namespace std;

int main(){
    int a,b;
    float t;

    cin>>a>>b;

    if(a==1){
        t = b*4.00;
    }else{
        if(a==2){
            t=b*4.50;
        }else{
            if(a==3){
                t=b*5.00;
            }else{
                if(a==4){
                    t=b*2.00;
                }else{
                    if(a==5){
                        t=b*1.50;
                    }
                }
            }
        }
    }

    cout<<"Total: R$ "<<fixed<< setprecision(2)<<t <<endl;

    return 0;
}