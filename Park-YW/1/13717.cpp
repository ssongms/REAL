#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Candy{
	string name;
	int need = 1, have = 0, evol = 0;
	int LevelUp() {
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
		cin >> dict[index].name >> dict[index].need >> dict[index].have;
	}
	for (Candy poke : dict) {
		sum_evol += poke.LevelUp();
		if (max_evol.evol< poke.evol){
			max_evol = poke;
		}

		
	}
	cout << sum_evol << endl;
	cout << max_evol.name;

}