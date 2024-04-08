#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; // 집의 수
    cin >> N;

    vector<int> house(N);

    for (int i = 0; i < N; i++) {
        cin >> house[i];
    }

    // 집들의 위치를 오름차순으로 정렬
    sort(house.begin(), house.end());

    // 집의 수가 짝수면, N/2 - 1 번째 위치의 값이 중앙값에 해당(여러 개의 값이 도출될 경우 가장 작은 값을 출력)
    // 집의 수가 홀수면, N/2 번째 위치의 값이 중앙값에 해당
    cout << house[(N - 1) / 2];

    return 0;
}