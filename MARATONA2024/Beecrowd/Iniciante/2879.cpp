#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int n, cont, j;

    cin>>n;
    cont = 0;
    for(int i = 0; i<n; i++){
        cin>>j;

        if(j!=1){
            cont++;
        }
    }

    cout<<cont<<endl;

    return 0;

}