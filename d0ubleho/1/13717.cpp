#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    vector<string> name(num);
    vector<int> candy(num), candies(num);

    for (int i = 0; i < num; ++i) {
        cin >> name[i] >> candy[i] >> candies[i];
    }

    int total = 0;
    int maxevolve = 0;
    string maxPokemon;

    for (int i = 0; i < num; ++i) {
        int evolve = 0;
        while (candies[i] >= candy[i]) {
            candies[i] = candies[i] - candy[i] + 2;
            evolve++;
        }
        total += evolve;
        if (evolve > maxevolve) {
            maxevolve = evolve;
            maxPokemon = name[i];
        }
    }

    cout << total << endl;
    cout << maxPokemon << endl;

    return 0;
}