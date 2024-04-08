#include <iostream>
#include <vector>
using namespace std;

int main() {
	int input;		//레벨의 수 N
	cin >> input;
	int score;		//각 레벨을 클리어했을 때 얻는 점수
	int sum = 0;	//총 감소시켜야 하는 점수의 횟수
	vector<int> score_list(input);
	for (int i = 0; i < input; i++) {	//vector에 요소를 넣어준다!
		cin >> score;
		score_list[i] = score;
	}
	for (int i = input-1; i >=1; i--) {		//vector의 끝부분에서 처음부분순으로 돌기
		while (score_list[i] <= score_list[i - 1]) {
			score_list[i - 1]--;			
			sum++;
		}
	}
	cout << sum;
	return 0;
}