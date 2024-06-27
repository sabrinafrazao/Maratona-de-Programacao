#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int n;

    while (cin>>n)
    {
        vector<int>seque(n);
        for(int i = 0; i<n; i++){
            cin>>seque[i];
        }

        if(n==1){
            cout<<"Jolly"<<endl;
            continue;
        }

        set<int>diferentes;
        bool jolly = true;

         for(int i = 1; i<n; i++){
            int inter = abs(seque[i] - seque[i-1]);
            if(inter<1 || inter>=n || diferentes.find(inter) != diferentes.end()){
                jolly = false;
                break;
            }
            diferentes.insert(inter);
        }

        if(jolly && diferentes.size() == n-1){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not Jolly"<<endl;
        }
    }

    return 0;
    
}