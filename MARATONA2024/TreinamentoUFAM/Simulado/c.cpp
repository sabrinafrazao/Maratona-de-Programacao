// Entendi mais ou menos, entender alguma parte da sintaxe

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    unordered_set<char> unique_pokemons(s.begin(), s.end());
    int total_unique = unique_pokemons.size();

    unordered_map<char, int> window_pokemon_count;
    int min_length = numeric_limits<int>::max();
    int left = 0;
    int unique_count_in_window = 0;

    for (int right = 0; right < n; ++right) {
        char pokemon_right = s[right];
        window_pokemon_count[pokemon_right]++;
        
        if (window_pokemon_count[pokemon_right] == 1) {
            unique_count_in_window++;
        }

        while (unique_count_in_window == total_unique) {
            min_length = min(min_length, right - left + 1);

            char pokemon_left = s[left];
            window_pokemon_count[pokemon_left]--;

            if (window_pokemon_count[pokemon_left] == 0) {
                unique_count_in_window--;
            }
            left++;
        }
    }

    cout << min_length << endl;

    return 0;
}
