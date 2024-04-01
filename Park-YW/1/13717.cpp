#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Candy{	//포켓몬 구조체 - 이름, 사탕 필요수, 사탕 소지수, 최대 진화 가능수 포함
	string name;
	int need = 1, have = 0, evol = 0;
	int LevelUp() {		//최대 진화 가능수 계산
		while (need <= have) {
			evol++;
			have = have - need + 2;
		}
		return evol;	
	}
};


int amount, sum_evol = 0;
Candy max_evol;

int main() 
{
	cin >> amount;
	vector<Candy> dict(amount);

	for (int index = 0; index < amount; ++index) 
	{
		cin >> dict[index].name >> dict[index].need >> dict[index].have;	//포켓몬 값 초기화
	}
	for (Candy poke : dict) {
		sum_evol += poke.LevelUp();		//최대 진화수 가산 + LevelUp 함수 호출
		if (max_evol.evol< poke.evol){	//최대 진화 포켓몬의 구조체 선별
			max_evol = poke;
		}

		
	}
	cout << sum_evol << endl;
	cout << max_evol.name;

}