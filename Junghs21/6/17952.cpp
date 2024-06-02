#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main() {

	//<점수, 남은 시간>
	stack<pair<int, int>> homework;
	//얻은 점수
	int score = 0;

	//이번 학기기가 몇 분인지 입력
	int minute;
	cin >> minute;

	for (int i = 0; i < minute; i++) {
		//앞의 0과 1을 구분하기 위해 입력 받음
		int M;
		cin >> M;

		//1이면
		if (M == 1) {
			//과제 점수A와 해결하는데 걸리는 시간 T를 입력
			int A, T;
			cin >> A >> T;

			//push하고 해당 시간이 1분 지났으니 -1만큼 감소
			homework.push({ A, T });
			homework.top().second -= 1;

			//남은 시간이 0이면 과제 점수를 얻고 스택에서 삭제
			if (homework.top().second == 0) {
				score += homework.top().first;
				homework.pop();
			}
		}//0이면
		else if (M == 0) {
			if (!homework.empty()) {
				//1분이 지났으므로 과제 남은시간 -1만큼 감소
				homework.top().second -= 1;
				//과제의 남은 시간이 0이면, 점수를 얻고 스택에서 제거
				if (homework.top().second == 0) {
					score += homework.top().first;
					homework.pop();
				}
			}
		}
	}

	//얻은 점수 출력
	cout << score;

}