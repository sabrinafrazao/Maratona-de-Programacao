#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        int days = 0;
        for (int j = 0; j < M; j++) {
            if (A[j] >= i + 1) {
                days = A[j] - (i + 1);
                break;
            }
        }
        cout << days << endl;
    }

    return 0;
}
