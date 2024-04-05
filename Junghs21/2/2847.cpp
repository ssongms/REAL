#include <iostream>
#include <vector>

using namespace std;

int main() {

	//레벨 수 입력
	int numberOflevel;
	cin >> numberOflevel;

	int Count = 1;

	//레벨의 수 만큼 vector생성 후 입력
	vector<int> levels(numberOflevel);
	for (int i = 0; i < numberOflevel; i++) {
		cin >> levels[i];
	}

	//점수 1점 당 1만큼 감소하고 카운트 증가
	for (int i = 0; i < numberOflevel-1;i++) {
		if (levels[i] > levels[i + 1]) {
			Count += (levels[i] - levels[i + 1]);
		}
		else {
			Count += 1;
		}
	}

	//점수 감소시킨 횟수 출력
	cout << Count;
}