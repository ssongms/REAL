#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // 컴퓨터 수와 연결 쌍 수 입력받기

    bool network[101][101] = { false }; // 컴퓨터 연결 상태
    bool infected[101] = { false }; // 감염 상태
    infected[1] = true; // 1번 컴퓨터는 이미 감염됨

    // 연결 상태 입력
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        network[a][b] = network[b][a] = true;
    }

    for (int all = 0; all < n; all++) {
        for (int i = 0; i < n; i++) {
            if (infected[i + 1]) { // i번 컴퓨터가 감염되었으면
                for (int j = 0; j < n + 1; j++) {
                    if (network[i + 1][j + 1]) { // i와 j가 연결되어 있으면
                        infected[j + 1] = true; // j도 감염
                    }
                }
            }
        }
    }

    int count = 0;
    for (int i = 1; i < n; i++) { // 1번 컴퓨터는 제외
        if (infected[i+1]) count++;
    }

    cout << count << endl;

    return 0;
}