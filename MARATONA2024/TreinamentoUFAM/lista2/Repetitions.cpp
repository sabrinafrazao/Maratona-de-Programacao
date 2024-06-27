#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _
    string n;
    int maxR = 1; 
    int cont = 1; 

    cin >> n;

    for(int i = 1; i < n.length(); i++){
        if(n[i] == n[i - 1]){
            cont++; 
            maxR = max(maxR, cont); 
        } else {
            cont = 1; 
        }
    }

    cout << maxR << endl; 

    return 0;
}
