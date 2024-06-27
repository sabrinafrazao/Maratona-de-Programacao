#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

const int MOD = 1'000'000'007;

// Função para calcular (a^b) % MOD
long long mod_pow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

// Função para calcular o inverso modular de a % mod
long long mod_inverse(long long a, long long mod) {
    return mod_pow(a, mod - 2, mod);
}

int main() {
    long long L1, R1, L2, R2, L3, R3;
    std::cin >> L1 >> R1 >> L2 >> R2 >> L3 >> R3;
    
    long long total_configs = (R1 - L1 + 1) * (R2 - L2 + 1) * (R3 - L3 + 1);
    long long winning_configs = 0;

    for (long long i = L1; i <= R1; ++i) {
        for (long long j = L2; j <= R2; ++j) {
            for (long long k = L3; k <= R3; ++k) {
                if ((i ^ j ^ k) != 0) {
                    ++winning_configs;
                }
            }
        }
    }

    long long p = winning_configs;
    long long q = total_configs;
    
    long long q_inv = mod_inverse(q, MOD);
    long long result = (p * q_inv) % MOD;

    std::cout << result << std::endl;

    return 0;
}
