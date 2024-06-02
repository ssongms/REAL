#include <iostream>
#include <string>
using namespace std;

int main() {
	long long counter;
	cin >> counter;


	string bigPoketmon;
	long long bigPoketmonHowMany =0;
	string givenPoketmon;
	long long need;
	long long have;
	long long total=0;



	for (int i = 0; i < counter; i++) 
	{
		int givenPoketmonHowMany = 0;
		cin >> givenPoketmon;
		cin >> need >> have;
		while (have >= need)
		{
			have = have - need + 2;
			givenPoketmonHowMany++;
		}

		if (givenPoketmonHowMany > bigPoketmonHowMany)
		{
			bigPoketmon = givenPoketmon;
			bigPoketmonHowMany = givenPoketmonHowMany;
		}

		total += givenPoketmonHowMany;
	}

	cout << total << endl;
	cout << bigPoketmon;

	return 0;

}