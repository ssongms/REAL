#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	//설탕을 배달할 수 있는 봉지 갯수를 구하는 모든 경우의 수를 저장할 변수
	vector<int> result;

	//배달 해야 할 설탕 갯수 입력
	int bag;
	cin >> bag;

	//3kg 봉지로만 모두 배달할 수 있는 경우의 수
	if (bag % 3 == 0) {
		result.push_back(bag / 3);
	}

	//5kg 봉지로만 모두 배달할 수 있는 경우의 수
	if (bag % 5 == 0) {
		result.push_back(bag / 5);
	}

	//3kg과 5kg의 봉지로 배달할 수 있는 모든 경우의 수
	for (int i = 0; i < 1000;i++) {
		for (int j = 0; j < 1000; j++) {
			if ((3 * i + 5 * j) == bag) {
				result.push_back(i + j);
				}
		}
	}

	//배달할 수 있는 경우의 수가 없으면 -1 출력
	if (result.empty()) {
		result.push_back(-1);
	}

	//모든 경우의 수를 저장한 result변수를 오름차순으로 정렬
	sort(result.begin(), result.end());

	//가장 작은 값을 가진 결과 출력
	cout << result[0];

}