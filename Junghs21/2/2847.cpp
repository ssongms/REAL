#include <iostream>
#include <vector>

using namespace std;

int main() {

	//���� �� �Է�
	int numberOflevel;
	cin >> numberOflevel;

	int Count = 1;

	//������ �� ��ŭ vector���� �� �Է�
	vector<int> levels(numberOflevel);
	for (int i = 0; i < numberOflevel; i++) {
		cin >> levels[i];
	}

	//���� 1�� �� 1��ŭ �����ϰ� ī��Ʈ ����
	for (int i = 0; i < numberOflevel-1;i++) {
		if (levels[i] > levels[i + 1]) {
			Count += (levels[i] - levels[i + 1]);
		}
		else {
			Count += 1;
		}
	}

	//���� ���ҽ�Ų Ƚ�� ���
	cout << Count;
}