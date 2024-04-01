#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string password;
	string reverseString;
	long long counter;


	cin >> counter;
	string* list = new string[counter];
	for (int i = 0; i < counter; i++)
	{
		string givenString;
		cin >> givenString;
		list[i] = givenString;

	}


	for (int i = 0; i < counter; i++)
	{
		string chosenString = list[i];
		string reverseString = list[i];
		reverse(reverseString.begin(), reverseString.end());


		for (int z = 0; z < counter; z++)
		{
			if (reverseString == list[z])
			{
				password = list[z];
			}

		}
	}

	cout << password.size() << ' ' << password[password.size() / 2];

	delete[] list;
	return 0;
}
