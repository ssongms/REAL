#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	cin >> N;

	//���� ��� ����
	vector<vector<int>> adjMatrix(N, vector<int>(N));
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < N;j++) {
			cin >> adjMatrix[i][j];
		}
	}

	//Floyd-Warshall �˰��� ����
	for (int k = 0; k < N; k++) {	//��� ���
		for (int i = 0; i < N; i++) {	//���� ���
			for (int j = 0; j < N; j++) {	//������ ���
				//i���� k�� ���� ��ο� k���� j�� ���� ��ΰ� �ִ� ����
				if ( adjMatrix[i][k] && adjMatrix[k][j]) {
					adjMatrix[i][j] = 1; //i���� j�� ���� ��� ǥ��
				}
			}
		}
	}

	//��� ���
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << adjMatrix[i][j] << " ";
		}
		cout << endl;
	}


}