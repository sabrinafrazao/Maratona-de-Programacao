// Questão A MFP 2023 , NÃO ENTENDI NADA

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int testCase = 0; testCase < t; ++testCase) {
        int n;
        cin >> n;
        vector<int> p(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }

        for (int i = 1; i <= n; ++i) {
            vector<int> ans;
            ans.push_back(i);
            int u = p[i];
            while (u != i) {
                ans.push_back(u);
                u = p[u];
            }
            for (int i = 0; i < ans.size(); ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
