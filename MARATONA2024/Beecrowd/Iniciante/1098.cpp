#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    cout<<fixed<<setprecision(1);

    for(int i = 0; i<=0; i++){
        for(int j = 1; j<=3; j++){
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    for (double i = 0.2; i <= 0.8; i += 0.2) {
        for (int j = 1; j <= 3; j++) {
            cout << "I=" << i << " J=" << i + j << endl;
        }
    }

    for(int i = 1; i<=1; i++){
        for(int j = 2; j<=4; j++){
            cout << "I=" << i << " J=" << j << endl;
        }
    }

     for (double i = 1.2; i <= 1.8; i += 0.2) {
        for (int j = 1; j <= 3; j++) {
            cout << "I=" << i << " J=" << i + j << endl;
        }
    }

     for (int i = 2; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "I=" << i << " J=" << i + j << endl;
        }
    }

    return 0;

}