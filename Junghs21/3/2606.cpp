#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int numberOfComputers;
    int numberOfPairs;

    cin >> numberOfComputers >> numberOfPairs;

    if (numberOfComputers > 100) {
        return 0;
    }

    //각 컴퓨터의 방문 여부를 저장하는 배열
    vector<bool> visited(numberOfComputers + 1, false);
    //각 컴퓨터와 직접 연결된 컴퓨터들의 목록을 저장하는 인접 리스트
    vector<vector<int>> adjList(numberOfComputers + 1);

    //직접 연결된 컴퓨터들의 정보를 입력 받고 인접 리스트를 구성
    for (int i = 0; i < numberOfPairs; i++) {
        int computer1, computer2;
        cin >> computer1 >> computer2;
        adjList[computer1].push_back(computer2);
        adjList[computer2].push_back(computer1);
    }

    //BFS를 사용하여 1번 컴퓨터를 시작으로 연결된 컴퓨터들을 탐색
    queue<int> q;
    q.push(1);
    visited[1] = true;
    int virusCount = 0;
    while (!q.empty()) {
        int currentComputer = q.front();
        q.pop();
        virusCount++; //감염된 컴퓨터 수 증가
        //현재 컴퓨터와 직접 연결된 컴퓨터들을 탐색
        for (int connectedComputer : adjList[currentComputer]) {
            if (!visited[connectedComputer]) {
                q.push(connectedComputer);
                visited[connectedComputer] = true;
            }
        }
    }

    //1번 컴퓨터를 통해 바이러스에 걸리게 되는 컴퓨터의 수 출력
    cout << virusCount - 1 << endl; //자기 자신은 카운트에서 제외

    return 0;
}
