#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> number(n);
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    int Max = number[0]; // 최대합과 부분합을 첫 번째 숫자로 설정
    int sum = number[0];

    for (int i = 1; i < n; i++) {
        sum = max(number[i], sum + number[i]); // 다음 숫자와 현재 부분합에 다음 숫자를 더한 값 중 더 큰 값
        Max = max(Max, sum); // 최대합 업데이트
    }

    cout << Max;

    return 0;
}