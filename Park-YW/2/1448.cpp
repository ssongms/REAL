#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


vector<int> segments;
long long amount;
int input, output = -1;


int main()
{
	cin >> amount;

	for (int index = 0; index < amount; index++)
	{
		cin >> input;
		segments.push_back(input);
	}
	sort(segments.begin(), segments.end());		//정렬

	for (int index = segments.size() - 1; index > 1; index--)
	{
		if (segments[index] < segments[index - 1] + segments[index - 2]) {		//큰 3개의 수부터 삼각형이 성립하는지 비교하며 내려간다.
			output = segments[index] + segments[index - 1] + segments[index - 2];
			break;
		}

	}
	cout << output;

}