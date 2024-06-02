#include <iostream>

using namespace std;

int N, S;
int count1 = 0;
int *arr;

void func(int num, int sum) {
	if (num == N) {
		if (sum = S) {
			count1++;
		}
		return;
	}
	func(num + 1, sum);   //다음 값을 더하지 않는 경우
	func(num + 1, sum + arr[num]);  //다음 값을 더하는 경우
}

int main() {
	cin >> N >> S;

	arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	func(0, 0);   //이게 첫 start!!

	if (S == 0) {
		count1--;   //S가 0이면 공집합의 0도 마지막 결과에 포함되기에 한 번 뺴줘야함!
	}

	cout << count1;

	return 0;
}