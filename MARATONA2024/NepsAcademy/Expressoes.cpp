#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main() { _
    int t;
    cin >> t;

    vector<string> caracteres(t);

    for (int i = 0; i < t; i++) {
        cin >> caracteres[i];
    }

    unordered_map<char, char> caracter_fechar = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (int i = 0; i < t; i++) {
        string caracter = caracteres[i];
        stack<char> s;
        bool valido = true;

        for (int j = 0; j < caracter.size(); j++) {
            char c = caracter[j];

            if (caracter_fechar.find(c) != caracter_fechar.end()) {
                if (s.empty() || s.top() != caracter_fechar[c]) {
                    valido = false;
                    break;
                }
                s.pop();
            } else {
                s.push(c);
            }
        }

        if (!s.empty()) {
            valido = false;
        }

        if (valido) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
