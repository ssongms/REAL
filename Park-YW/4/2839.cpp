#include<iostream>

using namespace std;

int amount = 0, bag = 0;

int main()
{
	cin >> amount;

	if (amount == 4 || amount == 7) {
		cout << -1;
		return 0;
	}
	bag = amount / 15 * 3;
	amount %= 15;

	if (amount == 1) {
		cout << bag + 1;
		return 0;
	}
	if (amount == 2 || amount == 4 || amount == 7) {
		cout << bag + 2 + amount / 5;
		return 0;
	}
	if (amount % 3 == 0 || amount % 3 == 2) {
		cout << bag + amount / 3;
		return 0;
	}
	if (amount % 5 == 0 || amount % 5 == 3) {
		cout << bag + amount / 5 + ((amount % 5) / 3);
		return 0;
	}
}