#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	//������ ����� �� �ִ� ���� ������ ���ϴ� ��� ����� ���� ������ ����
	vector<int> result;

	//��� �ؾ� �� ���� ���� �Է�
	int bag;
	cin >> bag;

	//3kg �����θ� ��� ����� �� �ִ� ����� ��
	if (bag % 3 == 0) {
		result.push_back(bag / 3);
	}

	//5kg �����θ� ��� ����� �� �ִ� ����� ��
	if (bag % 5 == 0) {
		result.push_back(bag / 5);
	}

	//3kg�� 5kg�� ������ ����� �� �ִ� ��� ����� ��
	for (int i = 0; i < 1000;i++) {
		for (int j = 0; j < 1000; j++) {
			if ((3 * i + 5 * j) == bag) {
				result.push_back(i + j);
				}
		}
	}

	//����� �� �ִ� ����� ���� ������ -1 ���
	if (result.empty()) {
		result.push_back(-1);
	}

	//��� ����� ���� ������ result������ ������������ ����
	sort(result.begin(), result.end());

	//���� ���� ���� ���� ��� ���
	cout << result[0];

}