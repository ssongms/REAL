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
	func(num + 1, sum);   //���� ���� ������ �ʴ� ���
	func(num + 1, sum + arr[num]);  //���� ���� ���ϴ� ���
}

int main() {
	cin >> N >> S;

	arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	func(0, 0);   //�̰� ù start!!

	if (S == 0) {
		count1--;   //S�� 0�̸� �������� 0�� ������ ����� ���ԵǱ⿡ �� �� �������!
	}

	cout << count1;

	return 0;
}