#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;


int main()

{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long counter;
	cin >> counter;
	int* house = new int[counter];

	for (long long i = 0; i < counter; i++)
	{
		int input;
		cin >> input;
		house[i] = input;
	}

	sort(house, house + counter);
	cout << house[(counter - 1) / 2];
	return 0;
}