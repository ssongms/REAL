#include<iostream>

using namespace std;

int amount;
int S;
int* arr;

int check(int sum, int num, bool plus, bool notZero)
{

	if (plus)
	{
		sum += arr[num];
		notZero = true;
	}

	if (num >= amount - 1)
	{
		return (S == sum) & notZero;
	}

	return check(sum, num + 1, true, notZero) + check(sum, num + 1, false, notZero);
}

int main()
{
	cin >> amount;
	cin >> S;

	arr = new int[amount];

	for (int index = 0; index < amount; index++)
	{
		cin >> arr[index];
	}

	cout << check(0, 0, true, 0) + check(0, 0, false, 0);
}