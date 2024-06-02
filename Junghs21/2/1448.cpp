#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//빨대의 개수 입력
	int numberOfStraw;
	cin >> numberOfStraw;

	//가장 긴 삼격형의 길이를 저장할 maxLength 변수 생성
	int maxLength = -1;

	//빨대가 3개 미만이면 삼각형 못만드니 코드 종료
	if (numberOfStraw < 3) {
		cout << "삼각형 만들기 불가";
		return 0;
	}

	//빨대의 수만큼 입력받는 cm 벡터 생성
	vector<int> straws(numberOfStraw);

	//수만큼 입력 받음
	for (int i = 0; i < numberOfStraw; i++) {
			cin >> straws[i];
	}

	//빨대의 길이를 내림차순으로 정렬
	sort(straws.begin(), straws.end(), greater<int>());

	//빨대로 만들 수 있는 모든 삼각형의 길이를 구함 
	for (int i = 0; i < numberOfStraw - 2; ++i) {
		if (straws[i] < (straws[i+1] + straws[i+2])) {
	//max함수를 통하여 maxLength에 현재 입력되어 있는 가장 큰 길이 값과, 지금 반복문을 통해 만들 수 있는 길이 값중 큰것을 maxLength에 저장
			maxLength = max(maxLength, straws[i] + straws[i + 1] + straws[i + 2]);
		}
	}

	cout << maxLength;
}