#include <iostream>

using namespace std;

int main() {

    //입력받는 돌의 수
    int stones;
    cin >> stones;

    //구한 경우의 수로 규칙성을 발견하고 구현
    if (stones % 2 == 1) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
}
//상근이가 먼저 시작
//직접 경우의 수 구함
// 1    2   3   4   5   6   7   8   9   10
// s    c   s   c   s   c   s   c   s   c
//stones(N)이 2개가 입력되면 CK가 이김 -> 돌은 1~3이 아니라 1, 3개만 가져갈 수 있다. 그래서 상근이가 이길 수 있는 경우의 수가 없다.