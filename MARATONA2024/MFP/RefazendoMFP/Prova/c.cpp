//Questão feita por IA
// Dificil, envolve assunto de programação dinâmica, nunca vi na vida.
// Estudar com mais detalhe.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    int p = (1 << N) - 1; // Calcula 2^N - 1

    std::vector<int> moedas(p);
    for (int i = 0; i < p; ++i) {
        std::cin >> moedas[i];
    }

    // Loop para calcular o máximo de moedas coletadas
    for (int i = N - 2; i >= 0; --i) {
        for (int j = (1 << i) - 1; j < (1 << (i + 1)) - 1; ++j) {
            moedas[j] += std::max(moedas[2 * j + 1], moedas[2 * j + 2]);
        }
    }

    std::cout << moedas[0] << std::endl;

    return 0;
}
