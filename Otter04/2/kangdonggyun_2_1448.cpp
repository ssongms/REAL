#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;		//빨대의 개수
	cin >> N;	//빨대의 개수를 입력받음
	int length;	//빨대의 길이
	int sum = 0;	//세 변의 길이의 합의 최댓값
	vector<int> length_list(N);		//입력받는 빨대의 길이를 저장할 vector

	for (int i = 0; i < N; i++) {
		cin >> length;
		length_list.push_back(length);
	}			//여기까지 하면 입력받은 길이들을 저장한 vector가 완성된다.
	sort(length_list.begin(), length_list.end(),greater<int>());	//내림차순으로 length_list정렬!
	for (int i = 0; i < N - 2; i++) {						//돌면서 가능한 case를 탐색하고 가능한 case가 있다면 sum에 저장, 불가능하면 sum은 0인채로 그대로 진행
		if (length_list[i] < length_list[i + 1] + length_list[i + 2]) {
			sum = length_list[i] + length_list[i + 1] + length_list[i + 2];
			break;
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum;
	}
	return 0;
}