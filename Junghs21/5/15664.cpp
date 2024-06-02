#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

//입력받은 숫자들을 저장할 벡터
vector<int> arr;
//조합을 저장할 벡터
vector<int> result;
//방문 여부를 저장할 벡터
bool visited[9];
//결과 조합을 저장할 큐
queue<vector<int>> q;

//DFS를 사용하여 조합을 생성
void dfs(int depth, int start, int N, int M) {

    //원하는 길이의 조합이 생성된 경우
    if (depth == M) {
        q.push(result);
        return;
    }

    //이전에 선택한 수
    int prev = -1;

    //현재 위치부터 N까지
    for (int i = start; i < N; i++) {
        //방문하지 않은 원소 & 중복된 원소가 아닌경우
        if (!visited[i] && arr[i] != prev) {
            //방문 표시
            visited[i] = true;

            prev = arr[i];
            result.push_back(arr[i]);

            //재귀 호출로 다음 깊이 탐색
            dfs(depth + 1, i + 1, N, M);

            //백트래킹(결과에서 현재 원소 제거)
            result.pop_back();
            //백트래킹(방문 표시 제거)
            visited[i] = false;
        }
    }
}

int main() {

    int N, M;
    cin >> N >> M;

    arr.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    //오름 차순 정렬
    sort(arr.begin(), arr.end());

    //DFS 시작
    dfs(0, 0, N, M);

    //큐에 저장된 모든 조합 출력
    while (!q.empty()) {
        vector<int> combination = q.front();
        q.pop();
        for (int num : combination) {
            cout << num << " ";
        }
        cout << '\n';
    }

}
