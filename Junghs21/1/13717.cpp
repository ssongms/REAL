#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pokemon {
    string name;
    int candyNeeded;
    int totalCandy;
};

int main() {

    int numberOfPokemon;
    int totalEvolution = 0;
    int maxEvolution = 0;
    string maxEvolutionPokemon;

    cin >> numberOfPokemon;

    //포켓몬 수만큼 정보를 담을 구조체 생성
    vector<Pokemon> pokemons(numberOfPokemon);

    // 포켓몬 정보 입력
    for (int i = 0; i < numberOfPokemon; ++i) {
        cin >> pokemons[i].name;
        cin >> pokemons[i].candyNeeded >> pokemons[i].totalCandy;
    }

    // 진화시킬 수 있는 포켓몬의 총 마리수 계산
    for (int i = 0; i < numberOfPokemon; ++i) {
        totalEvolution += pokemons[i].totalCandy / pokemons[i].candyNeeded;
    }


    // 가장 많이 진화시킬 수 있는 포켓몬의 이름 찾기
    for (int i = 0; i < numberOfPokemon; ++i) {
        int evolutionCount = pokemons[i].totalCandy / pokemons[i].candyNeeded;
        if (evolutionCount > maxEvolution) {
            maxEvolution = evolutionCount;
            maxEvolutionPokemon = pokemons[i].name;
        }
    }

    cout << totalEvolution << endl;
    cout << maxEvolutionPokemon << endl;

    return 0;
}
