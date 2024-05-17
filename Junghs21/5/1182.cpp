#include <iostream>
#include <vector>

using namespace std;

int N, S;
vector<int> arr;
int result = 0;

//DFS �Լ�
void dfs(int index, int current_sum) {

    // ���� �κм����� ���� S���� üũ
    if (index == N) {
        if (current_sum == S) {
            result++;
        }
        return;
    }

    // ���� ���Ҹ� �������� �ʴ� ���
    dfs(index + 1, current_sum);

    // ���� ���Ҹ� �����ϴ� ���
    dfs(index + 1, current_sum + arr[index]);
}

int main() {

    cin >> N >> S;
    arr.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // ���� S�� �Ǵ� �κм����� ������ ���� ���� DFS ȣ��
    dfs(0, 0);

    // S�� 0�� ��� �������� ����
    if (S == 0) {
        result--;
    }

    cout << result << endl;

}
