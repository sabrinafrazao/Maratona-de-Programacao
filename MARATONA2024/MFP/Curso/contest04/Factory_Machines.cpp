#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    ll int n, t;

    cin >> n >> t;

    vector<ll int> k(n);

    for(ll int i = 0; i < n; i++){
        cin >> k[i];
    }

    ll min = 1;
    ll max = *max_element(k.begin(), k.end()) * t;
    ll temp = max;

    while (min <= max)
    {
        ll medio = (min + max) / 2;
        ll totalP = 0;

        for(int i = 0; i < n; i++){
            totalP += medio / k[i];

            if(totalP >= t){
                temp = medio;
                max = medio - 1;
                break;
            }
        }
        if(totalP < t){
            min = medio + 1;
        }
    }

    cout << temp << endl;

    return 0;
}
