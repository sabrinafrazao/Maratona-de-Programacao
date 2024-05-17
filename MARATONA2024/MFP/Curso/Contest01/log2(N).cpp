#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main() {
    long long int x, n;
    cin >> n;

    x = -1; 

  
    while (n) {
        n >>= 1; 
        ++x;     
    }

    cout << x << endl;

    return 0;
}