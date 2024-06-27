#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    int n, x;

    cin>>n>>x;

    vector<int>a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int min = 1;
 
    for(int i = 0; i<n; i++){
        int cont = 1;

        for(int j = i+1; j<n; j++){
            if(a[j] - a[j-1] > x){
                break;
            }
            cont++;
        }

        min = max(min, cont);
    }

    cout<<min<<endl;

    return 0;

}
