#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int bag = 0;
    while (true) {
        if (N % 5 == 0) { // 5로 나누어 떨어지는 경우
            bag += N / 5;
            break;
        }
        else if (N < 0) { // 정확하게 N킬로그램을 만들 수 없는 경우
            bag = -1;
            break;
        }
        N -= 3; // 5로 나누어 떨어지지 않으면 3킬로그램 봉지 추가
        bag++;
    }

    cout << bag;

    return 0;
}