#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//������ ���� �Է�
	int numberOfStraw;
	cin >> numberOfStraw;

	//���� �� ������� ���̸� ������ maxLength ���� ����
	int maxLength = -1;

	//���밡 3�� �̸��̸� �ﰢ�� ������� �ڵ� ����
	if (numberOfStraw < 3) {
		cout << "�ﰢ�� ����� �Ұ�";
		return 0;
	}

	//������ ����ŭ �Է¹޴� cm ���� ����
	vector<int> straws(numberOfStraw);

	//����ŭ �Է� ����
	for (int i = 0; i < numberOfStraw; i++) {
			cin >> straws[i];
	}

	//������ ���̸� ������������ ����
	sort(straws.begin(), straws.end(), greater<int>());

	//����� ���� �� �ִ� ��� �ﰢ���� ���̸� ���� 
	for (int i = 0; i < numberOfStraw - 2; ++i) {
		if (straws[i] < (straws[i+1] + straws[i+2])) {
	//max�Լ��� ���Ͽ� maxLength�� ���� �ԷµǾ� �ִ� ���� ū ���� ����, ���� �ݺ����� ���� ���� �� �ִ� ���� ���� ū���� maxLength�� ����
			maxLength = max(maxLength, straws[i] + straws[i + 1] + straws[i + 2]);
		}
	}

	cout << maxLength;
}