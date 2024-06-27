#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){ _

    int n;

    cin>>n;

    int contIn = 0, contOn = 0;

    for(int i =0; i<n; i++){
        int x;
        cin>>x;

        if(x>=10 && x<=20){
            contIn++;
        }else{
            contOn++;
        }
    }

    cout<<contIn<<" in"<<endl;
    cout<<contOn<<" out"<<endl;

    return 0;

}