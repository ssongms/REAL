#include <iostream>
#include <vector>
#include <algorithm> //sort 함수

using namespace std;

int main() {
    int straw; // 빨대 개수
    cin >> straw;

    vector<int> straws(straw);

    for (int i = 0; i < straw; i++) {
        cin >> straws[i];
    }

    sort(straws.begin(), straws.end(), greater<int>()); // 빨대들을 내림차순으로

    for (int i = 0; i < straw - 2; i++) {
        if (straws[i] < straws[i + 1] + straws[i + 2]) { // 삼각형이 될 수 있는 조건
            // 삼각형을 만들 수 있으면 세 변의 길이의 합 출력
            cout << straws[i] + straws[i + 1] + straws[i + 2];
            return 0;
        }
    }

    // 삼각형을 만들 수 없는 경우
    cout << -1;

    return 0;
}