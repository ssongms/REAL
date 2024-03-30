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

    //���ϸ� ����ŭ ������ ���� ����ü ����
    vector<Pokemon> pokemons(numberOfPokemon);

    // ���ϸ� ���� �Է�
    for (int i = 0; i < numberOfPokemon; ++i) {
        cin >> pokemons[i].name;
        cin >> pokemons[i].candyNeeded >> pokemons[i].totalCandy;
    }

    // ��ȭ��ų �� �ִ� ���ϸ��� �� ������ ���
    for (int i = 0; i < numberOfPokemon; ++i) {
        totalEvolution += pokemons[i].totalCandy / pokemons[i].candyNeeded;
    }


    // ���� ���� ��ȭ��ų �� �ִ� ���ϸ��� �̸� ã��
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
