#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//빨대의 개수 입력
	int numberOfStraw;
	cin >> numberOfStraw;

	//빨대가 3개 미만이면 삼각형 못만드니 코드 종료
	if (numberOfStraw < 3) {
		cout << "삼각형 만들기 불가";
		return 0;
	}

	//빨대의 수만큼 입력받는 cm 벡터, 길이를 저장할 total 벡터 생성
	vector<int> cm(numberOfStraw);
	vector<int> total(numberOfStraw);

	//수만큼 입력 받음
	for (int i = 0; i < numberOfStraw; i++) {
			cin >> cm[i];
	}

	//빨대의 길이를 내림차순으로 정렬
	sort(cm.begin(), cm.end(), greater<int>());
	total[0] = -1;

	//빨대로 만든 삼각형의 모든 길이를 구해서 total에 저장
	for (int i = 0; i < numberOfStraw - 2; ++i) {
		if (cm[i] < (cm[i+1] + cm[i+2])) {
			total[i+1] = cm[i] + cm[i + 1] + cm[i + 2];
		}
		//갯수가 많아도 맨 처음 3개의 숫자가 위에 if문을 만족하지않으면 바로 끝나는 오류발생
		else {
			cout << total[0];
			return 0;
		}
	}

	//모든 길이를 저장한 total을 내림차순으로 정렬
	sort(total.begin(), total.end(), greater<int>());

	//가장 긴 길이 출력
	cout << total[0];
}