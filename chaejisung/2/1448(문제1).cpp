#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, strawLength;
    vector<int> strawStorage;
    cin >> N;

    // �Է¹ޱ� O(n)
    for (int i = 0; i < N; i++) {
        cin >> strawLength;
        strawStorage.push_back(strawLength);
    }
    // ���� O(n)
    sort(strawStorage.begin(), strawStorage.end());

    // ū �� ���� ��, �� �ٷ� �Ʒ� �Ŷ� ���ߴµ��� �ȵǸ� �翬�� �ȵǴ� ��
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