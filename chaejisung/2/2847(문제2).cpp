#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, score;
    vector<int> scoreStorage;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> score;
        scoreStorage.push_back(score); // 뒤로 갈수록 어려워짐
    }

    // 각 단계의 값들을 검사한 후, 다음 단계의 값 -1로 현재 값 고정
    // 변경한 값 만큼 subCount 변수에 합산
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