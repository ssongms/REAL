#include <iostream>
#include <string>
using namespace std;

int main() {
	int species;                          
	cin >> species;                     //포켓몬 종류 수

	string final_name;					//가장 많이 진화시킬 수 있는 포켓몬의 이름
	int evol_sum = 0;					//진화시킬 수 있는 포켓몬의 총 마리수
	int max_evol = 0;					//가장 많이 진화 시킨 횟수
	for (int i = 0; i < species; i++) {
		string pokemon_name;
		cin >> pokemon_name;
		int need, current;				//need는 진화에 필요한 사탕의 수, current는 현재 가지고 있는 사탕의 수
		int evol = 0;
		cin >> need >> current;
		while (current - need >= 0) {
			current -= need;
			current += 2;
			evol += 1;
		}
		evol_sum += evol;

		if (evol > max_evol) {			//만약 evol이 max_evol보다 크면 그 evol이 max_evol이 된다.
										//가장 많이 진화시킬 수 있는 포켓몬의 이름을 찾기 위한 과정
			max_evol = evol;
			final_name = pokemon_name;
		}
	}
	cout << evol_sum << endl;
	cout << final_name;
}