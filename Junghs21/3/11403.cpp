#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	cin >> N;

	//인접 행렬 생성
	vector<vector<int>> adjMatrix(N, vector<int>(N));
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < N;j++) {
			cin >> adjMatrix[i][j];
		}
	}

	//Floyd-Warshall 알고리즘 응용
	for (int k = 0; k < N; k++) {	//가운데 노드
		for (int i = 0; i < N; i++) {	//시작 노드
			for (int j = 0; j < N; j++) {	//마지막 노드
				//i에서 k로 가는 경로와 k에서 j로 가는 경로가 있는 조건
				if ( adjMatrix[i][k] && adjMatrix[k][j]) {
					adjMatrix[i][j] = 1; //i에서 j로 가는 경로 표시
				}
			}
		}
	}

	//결과 출력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << adjMatrix[i][j] << " ";
		}
		cout << endl;
	}


}