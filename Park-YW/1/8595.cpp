#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string input;
	vector<int> numbers;
	int hidden;
	long long int result = 0;


	cin >> hidden;
	cin >> input;

	hidden = 0;
	for (int i = 0; i < input.length(); i++) {
		if (47 < input[i] && input[i] < 58) {
			hidden = hidden * 10 + input[i] - 48;
			if (input[i + 1] > 57) {
				result += hidden;
				hidden = 0;
			}
		}
	}
	if (hidden != 0) {
		result += hidden;
	}

	cout << result;

}