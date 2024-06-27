#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int n, x, y;

    cin>>n;

    int soma = 0;

    for(int i = 0; i<n; i++){
        cin>>x>>y;

        if(y>x){
            for(int i=y-1; i> x; i--){
                if(i%2!=0){
                    soma+=i;
                }
            }
        }else{
            if(x>y){
                for(int i=x-1; i>y; i--){
                    if(i%2!=0){
                        soma+=i;
                    }
                }
            }
       }
       cout<<soma<<endl;
       soma=0;
    }

    

    return 0;

    
}