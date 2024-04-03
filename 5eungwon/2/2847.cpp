#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int summ = 0;
	vector<int>box;
	for (int i = 0; i < n; i++) {   //n번 만큼 게임변수 입력받음
		int a;
		cin >> a;
		box.push_back(a);
	}
	for (int i = box.size() - 2; i >= 0; i--) {   //벡터의 인덱스의 끝 -1 부터 탐색하여 i의 값이 i+1의 값보다 작아질때까지 감수 -1 
		while (box[i] >= box[i + 1]) {
			summ++;       //횟수를 summ변수에 저장
			box[i]--;
		}
	}
	cout << summ;   //summ 출력
}