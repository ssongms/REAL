#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int** map = new int* [n + 1];  //�� 2�����迭 �����Ҵ�
	for (int i = 0; i < n + 1; i++) {
		map[i] = new int[n + 1];
	}
	for (int i = 1; i < n + 1; i++) {    //�� �Է¹ޱ�
		for (int j = 1; j < n + 1; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 1; i < n + 1; i++) {    // a->���� b�� b->c�� ���� ������ ������ a->c�� ���� ������ ������ üŷ���ش�.
		for (int j = 1; j < n + 1; j++) {
			for (int k = 1; k < n + 1; k++) {
				if (map[j][i] == 1 && map[i][k] == 1) {
					map[j][k] = 1;
				}
			}
		}
	}
	for (int i = 1; i < n + 1; i++) {   //�����
		for (int j = 1; j < n + 1; j++) {
			cout << map[i][j] << " ";
		}
		cout << '\n';
	}
}