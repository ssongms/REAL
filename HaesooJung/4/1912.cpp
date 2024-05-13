#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;

	int* Array = new int[count];
	long long bigValue= 0;

	for (int i = 0; i < count; i++)
	{
		int userInput;
		cin >> userInput;
		Array[i] = userInput;
	}
	int* anotherArray = new int[count];
	anotherArray[0] = Array[0];
	bigValue = Array[0];

	for (int i = 1; i < count; i++)
	{
		anotherArray[i] = max(anotherArray[i - 1] + Array[i], Array[i]);
		if (bigValue < anotherArray[i])
			bigValue = anotherArray[i];
	}
	

	cout << bigValue;

	return 0;
}