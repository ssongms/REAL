#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//������ ���� �Է�
	int numberOfStraw;
	cin >> numberOfStraw;

	//���밡 3�� �̸��̸� �ﰢ�� ������� �ڵ� ����
	if (numberOfStraw < 3) {
		cout << "�ﰢ�� ����� �Ұ�";
		return 0;
	}

	//������ ����ŭ �Է¹޴� cm ����, ���̸� ������ total ���� ����
	vector<int> cm(numberOfStraw);
	vector<int> total(numberOfStraw);

	//����ŭ �Է� ����
	for (int i = 0; i < numberOfStraw; i++) {
			cin >> cm[i];
	}

	//������ ���̸� ������������ ����
	sort(cm.begin(), cm.end(), greater<int>());
	total[0] = -1;

	//����� ���� �ﰢ���� ��� ���̸� ���ؼ� total�� ����
	for (int i = 0; i < numberOfStraw - 2; ++i) {
		if (cm[i] < (cm[i+1] + cm[i+2])) {
			total[i+1] = cm[i] + cm[i + 1] + cm[i + 2];
		}
		//������ ���Ƶ� �� ó�� 3���� ���ڰ� ���� if���� �������������� �ٷ� ������ �����߻�
		else {
			cout << total[0];
			return 0;
		}
	}

	//��� ���̸� ������ total�� ������������ ����
	sort(total.begin(), total.end(), greater<int>());

	//���� �� ���� ���
	cout << total[0];
}