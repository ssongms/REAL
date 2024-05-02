#include <iostream>
#include <queue>
#include <vector>
#include <utility>	//pair를 사용하기 위한 헤더

using namespace std;

//캠퍼스 크기
int N, M;
//캠퍼스 정보
vector<vector<char>> campusInfo;

int bfs(int startX, int startY) {

	//2개의 좌표 값을 한 쌍으로 저장할 queue 변수 선언
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	//방문 여부를 확인할 변수 선언
	vector<vector<bool>> visited(N, vector<bool>(M, false));

	//만난 사람의 수
	int count = 0;

	//시작 좌표는 방문했으니 true
	visited[startX][startY] = true;

	while (!q.empty()) {
		//한 쌍의 값을 저장한 q
		int x = q.front().first;	//x는 1번째 int의 값 할당
		int y = q.front().second;	//y는 2번째 int의 값 할당
		q.pop();

		//사람을 만나면 카운트 증가 조건식
		if (campusInfo[x][y] == 'P') {
			count++;
		}

		//x좌표, y좌표로 움직일 변수 값
		int dx[] = { 1, -1,0,0 };
		int dy[] = { 0,0,1,-1 };

		//순회 시작
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < N && ny >= 0 && ny < M && campusInfo[nx][ny] != 'X' && !visited[nx][ny]) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}

	return count;
}

int main() {
	
	//N행 M열의 캠퍼스 정보를 담을 2차원 벡터
	cin >> N >> M;
	campusInfo.resize(N, vector<char>(M));

	//도연이의 좌표 찾기
	int startX, startY;
	for (int i = 0; i < N; i++) {
		for (int j = 0;j < M; j++) {
			cin >> campusInfo[i][j];
			if (campusInfo[i][j] == 'I') {
				startX = i;
				startY = j;
			}
		}
	}

	int result = bfs(startX, startY);
	
	//결과 출력
	if (result == 0) {
		cout << "TT";
	}
	else {
		cout << result;
	}
}
