#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;		//������ ����
	cin >> N;	//������ ������ �Է¹���
	int length;	//������ ����
	int sum = 0;	//�� ���� ������ ���� �ִ�
	vector<int> length_list(N);		//�Է¹޴� ������ ���̸� ������ vector

	for (int i = 0; i < N; i++) {
		cin >> length;
		length_list.push_back(length);
	}			//������� �ϸ� �Է¹��� ���̵��� ������ vector�� �ϼ��ȴ�.
	sort(length_list.begin(), length_list.end(),greater<int>());	//������������ length_list����!
	for (int i = 0; i < N - 2; i++) {						//���鼭 ������ case�� Ž���ϰ� ������ case�� �ִٸ� sum�� ����, �Ұ����ϸ� sum�� 0��ä�� �״�� ����
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