#include<iostream>
#include<vector>

using namespace std;


vector<int> score;
long long amount;
int input, output = 0;


int main()
{
	cin >> amount;

	for (int index = 0; index < amount; index++)
	{
		cin >> input;
		score.push_back(input);
	}

	for (int index = score.size() - 1; index > 0; index--)	
	{
		while (score[index] <= score[index - 1]) { //한칸 아래 레벨의 점수가 현재 점수가 낮아질 때까지 감소를 반복시킨다
			score[index - 1]--;
			output++;
		}

	}
	cout << output;

}