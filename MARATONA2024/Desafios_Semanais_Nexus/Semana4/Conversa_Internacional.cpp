#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"


using namespace std;

int main(){ _

    int n, k;
    string l;

    cin>>n; 

    while(n--){ _
        cin>>k;

        unordered_set<string> s;

        for(int i = 0; i<k; i++){
            cin>>l;
            s.insert(l);

        }

        if(s.size()>1){
            cout<<"ingles"<<endl;
            }else{
            cout<< *s.begin()<<endl;
        }

    }
    
    return 0;

}


