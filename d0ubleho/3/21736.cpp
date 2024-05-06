#include <iostream>
#include <vector>

using namespace std;

int N, M, count = 0;
vector<string> campus;
bool visited[601][601];

void F(int x, int y) {
    // 지도 밖이거나, 이미 방문했거나, 벽이면 종료
    if (x < 0 || x >= N || y < 0 || y >= M || campus[x][y] == 'X' || visited[x][y]) return;
    visited[x][y] = true;
    if (campus[x][y] == 'P') count++;

    //위아래 양옆 이동
    F(x + 1, y);
    F(x - 1, y);
    F(x, y + 1);
    F(x, y - 1);
}

int main() {
    cin >> N >> M;
    campus.resize(N);
    int startX, startY;
    for (int i = 0; i < N; i++) { //도연이 찾기
        cin >> campus[i];
        for (int j = 0; j < M; j++) {
            if (campus[i][j] == 'I') {
                startX = i;
                startY = j;
            }
        }
    }

    F(startX, startY);

    if (count == 0) cout << "TT" << endl;
    else cout << count << endl;

    return 0;
}