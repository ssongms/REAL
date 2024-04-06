#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, score;
    vector<int> scoreStorage;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> score;
        scoreStorage.push_back(score); // �ڷ� ������ �������
    }

    // �� �ܰ��� ������ �˻��� ��, ���� �ܰ��� �� -1�� ���� �� ����
    // ������ �� ��ŭ subCount ������ �ջ�
    int subCount = 0;
    for (int i = N - 1; i > 0; i--) {
        if (scoreStorage[i] <= scoreStorage[i - 1]) {
            subCount += scoreStorage[i - 1] - scoreStorage[i] + 1;
            scoreStorage[i - 1] = scoreStorage[i] - 1;
        }
    }

    cout << subCount;

    return 0;
}