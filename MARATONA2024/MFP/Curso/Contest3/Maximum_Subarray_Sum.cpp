#include <iostream>
#include <vector>
#include <algorithm> // Para std::max

using namespace std;

int main() {
    // Leitura do tamanho do array
    int n;
    cin >> n;
    
    // Leitura dos valores do array
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    // Algoritmo de Kadane para encontrar a soma máxima de uma subarray contígua
    long long max_current = x[0];
    long long max_global = x[0];
    
    for (int i = 1; i < n; i++) {
        max_current = max(x[i], max_current + x[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    
    // Impressão do resultado
    cout << max_global << endl;
    
    return 0;
}
