#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int** map = new int* [n + 1];  //맵 2차원배열 동적할당
	for (int i = 0; i < n + 1; i++) {
		map[i] = new int[n + 1];
	}
	for (int i = 1; i < n + 1; i++) {    //맵 입력받기
		for (int j = 1; j < n + 1; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 1; i < n + 1; i++) {    // a->에서 b와 b->c로 가는 간선이 있으면 a->c로 가는 간선도 있음을 체킹해준다.
		for (int j = 1; j < n + 1; j++) {
			for (int k = 1; k < n + 1; k++) {
				if (map[j][i] == 1 && map[i][k] == 1) {
					map[j][k] = 1;
				}
			}
		}
	}
	for (int i = 1; i < n + 1; i++) {   //맵출력
		for (int j = 1; j < n + 1; j++) {
			cout << map[i][j] << " ";
		}
		cout << '\n';
	}
}