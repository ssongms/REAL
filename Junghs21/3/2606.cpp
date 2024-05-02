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

    //�� ��ǻ���� �湮 ���θ� �����ϴ� �迭
    vector<bool> visited(numberOfComputers + 1, false);
    //�� ��ǻ�Ϳ� ���� ����� ��ǻ�͵��� ����� �����ϴ� ���� ����Ʈ
    vector<vector<int>> adjList(numberOfComputers + 1);

    //���� ����� ��ǻ�͵��� ������ �Է� �ް� ���� ����Ʈ�� ����
    for (int i = 0; i < numberOfPairs; i++) {
        int computer1, computer2;
        cin >> computer1 >> computer2;
        adjList[computer1].push_back(computer2);
        adjList[computer2].push_back(computer1);
    }

    //BFS�� ����Ͽ� 1�� ��ǻ�͸� �������� ����� ��ǻ�͵��� Ž��
    queue<int> q;
    q.push(1);
    visited[1] = true;
    int virusCount = 0;
    while (!q.empty()) {
        int currentComputer = q.front();
        q.pop();
        virusCount++; //������ ��ǻ�� �� ����
        //���� ��ǻ�Ϳ� ���� ����� ��ǻ�͵��� Ž��
        for (int connectedComputer : adjList[currentComputer]) {
            if (!visited[connectedComputer]) {
                q.push(connectedComputer);
                visited[connectedComputer] = true;
            }
        }
    }

    //1�� ��ǻ�͸� ���� ���̷����� �ɸ��� �Ǵ� ��ǻ���� �� ���
    cout << virusCount - 1 << endl; //�ڱ� �ڽ��� ī��Ʈ���� ����

    return 0;
}
