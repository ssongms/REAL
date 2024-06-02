#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main() {

	//<����, ���� �ð�>
	stack<pair<int, int>> homework;
	//���� ����
	int score = 0;

	//�̹� �б�Ⱑ �� ������ �Է�
	int minute;
	cin >> minute;

	for (int i = 0; i < minute; i++) {
		//���� 0�� 1�� �����ϱ� ���� �Է� ����
		int M;
		cin >> M;

		//1�̸�
		if (M == 1) {
			//���� ����A�� �ذ��ϴµ� �ɸ��� �ð� T�� �Է�
			int A, T;
			cin >> A >> T;

			//push�ϰ� �ش� �ð��� 1�� �������� -1��ŭ ����
			homework.push({ A, T });
			homework.top().second -= 1;

			//���� �ð��� 0�̸� ���� ������ ��� ���ÿ��� ����
			if (homework.top().second == 0) {
				score += homework.top().first;
				homework.pop();
			}
		}//0�̸�
		else if (M == 0) {
			if (!homework.empty()) {
				//1���� �������Ƿ� ���� �����ð� -1��ŭ ����
				homework.top().second -= 1;
				//������ ���� �ð��� 0�̸�, ������ ��� ���ÿ��� ����
				if (homework.top().second == 0) {
					score += homework.top().first;
					homework.pop();
				}
			}
		}
	}

	//���� ���� ���
	cout << score;

}