#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, strawLength;
    vector<int> strawStorage;
    cin >> N;

    // 입력받기 O(n)
    for (int i = 0; i < N; i++) {
        cin >> strawLength;
        strawStorage.push_back(strawLength);
    }
    // 정렬 O(n)
    sort(strawStorage.begin(), strawStorage.end());

    // 큰 것 부터 비교, 그 바로 아래 거랑 비교했는데도 안되면 당연히 안되는 것
    int maxStrawLengthIdx = N - 1;
    int maxLen, middleLen, minLen;
    int result = -1;

    while (maxStrawLengthIdx >= 2) {
        maxLen = strawStorage[maxStrawLengthIdx];
        middleLen = strawStorage[maxStrawLengthIdx - 1];
        minLen = strawStorage[maxStrawLengthIdx - 2];

        if (maxLen < middleLen + minLen) {
            result = maxLen + middleLen + minLen;
            break;
        }
        maxStrawLengthIdx--;
    }

    cout << result;

    return 0;
}