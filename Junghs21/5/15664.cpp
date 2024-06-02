#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

//�Է¹��� ���ڵ��� ������ ����
vector<int> arr;
//������ ������ ����
vector<int> result;
//�湮 ���θ� ������ ����
bool visited[9];
//��� ������ ������ ť
queue<vector<int>> q;

//DFS�� ����Ͽ� ������ ����
void dfs(int depth, int start, int N, int M) {

    //���ϴ� ������ ������ ������ ���
    if (depth == M) {
        q.push(result);
        return;
    }

    //������ ������ ��
    int prev = -1;

    //���� ��ġ���� N����
    for (int i = start; i < N; i++) {
        //�湮���� ���� ���� & �ߺ��� ���Ұ� �ƴѰ��
        if (!visited[i] && arr[i] != prev) {
            //�湮 ǥ��
            visited[i] = true;

            prev = arr[i];
            result.push_back(arr[i]);

            //��� ȣ��� ���� ���� Ž��
            dfs(depth + 1, i + 1, N, M);

            //��Ʈ��ŷ(������� ���� ���� ����)
            result.pop_back();
            //��Ʈ��ŷ(�湮 ǥ�� ����)
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

    //���� ���� ����
    sort(arr.begin(), arr.end());

    //DFS ����
    dfs(0, 0, N, M);

    //ť�� ����� ��� ���� ���
    while (!q.empty()) {
        vector<int> combination = q.front();
        q.pop();
        for (int num : combination) {
            cout << num << " ";
        }
        cout << '\n';
    }

}
