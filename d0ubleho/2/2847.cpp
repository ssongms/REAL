#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, count = 0; // 레벨의 수, 점수를 내린 횟수
    cin >> N;

    vector<int> score(N);

    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    // 뒤에서부터 점수 검사
    for (int i = N - 1; i > 0; i--) {
        // 지금 레벨의 점수가 다음 레벨의 점수보다 크거나 같다면 점수 내리기
        while (score[i] <= score[i - 1]) {
            score[i - 1]--;
            count++;
        }
    }

    cout << count;

    return 0;
}