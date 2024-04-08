#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> position;
long long amount;
int input;


int main()
{
	cin >> amount;

	for (int index = 0; index < amount; index++)
	{
		cin >> input;
		position.push_back(input);
	}
	sort(position.begin(), position.end());
	cout << position[(position.size() - 1) / 2];	//집에만 설치할 수 있으므로 중간값을 구한다
}