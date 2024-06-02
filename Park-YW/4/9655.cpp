#include<iostream>

using namespace std;

int amount = 0;

int main()
{
	cin >> amount;
	cout << (amount % 2 ? "SK" : "CY");
}