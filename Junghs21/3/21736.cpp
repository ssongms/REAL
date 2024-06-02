#include <iostream>
#include <queue>
#include <vector>
#include <utility>	//pair�� ����ϱ� ���� ���

using namespace std;

//ķ�۽� ũ��
int N, M;
//ķ�۽� ����
vector<vector<char>> campusInfo;

int bfs(int startX, int startY) {

	//2���� ��ǥ ���� �� ������ ������ queue ���� ����
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	//�湮 ���θ� Ȯ���� ���� ����
	vector<vector<bool>> visited(N, vector<bool>(M, false));

	//���� ����� ��
	int count = 0;

	//���� ��ǥ�� �湮������ true
	visited[startX][startY] = true;

	while (!q.empty()) {
		//�� ���� ���� ������ q
		int x = q.front().first;	//x�� 1��° int�� �� �Ҵ�
		int y = q.front().second;	//y�� 2��° int�� �� �Ҵ�
		q.pop();

		//����� ������ ī��Ʈ ���� ���ǽ�
		if (campusInfo[x][y] == 'P') {
			count++;
		}

		//x��ǥ, y��ǥ�� ������ ���� ��
		int dx[] = { 1, -1,0,0 };
		int dy[] = { 0,0,1,-1 };

		//��ȸ ����
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
	
	//N�� M���� ķ�۽� ������ ���� 2���� ����
	cin >> N >> M;
	campusInfo.resize(N, vector<char>(M));

	//�������� ��ǥ ã��
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
	
	//��� ���
	if (result == 0) {
		cout << "TT";
	}
	else {
		cout << result;
	}
}
