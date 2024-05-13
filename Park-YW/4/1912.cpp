#include<iostream>

using namespace std;

int amount = 0, sum = 0, maximum = 0, minusOnly = 0;

int main()
{
	cin >> amount;

	int* arr = new int[amount];
	for (int i = 0; i < amount; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < amount; ++i) {
		if (arr[i] + sum < 0) {
			if (maximum < sum)
				maximum = sum;
			sum = 0;
		}
		else {
			minusOnly = 1;
			sum += arr[i];
			if (maximum < sum)
				maximum = sum;
		}
	}
	if (minusOnly) {
		cout << maximum;
	}
	else {
		sum = arr[0];
		for (int i = 1; i < amount; ++i) {
			if (arr[i] > sum) {
				sum = arr[i];
			}
		}
		cout << sum;
	}
}