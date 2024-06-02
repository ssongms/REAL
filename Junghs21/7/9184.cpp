#include <iostream>

using namespace std;

//메모이제이션을 위한 배열
int dp[21][21][21];

int w(int a, int b, int c) {

    //a, b, c가 0 이하인 경우
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }

    //a, b, c가 20보다 큰 경우
    if (a > 20 || b > 20 || c > 20) {
        return w(20, 20, 20);
    }

    //이미 계산된 값이 있는 경우
    if (dp[a][b][c] != 0) {
        return dp[a][b][c];
    }

    //a < b < c 인 경우
    if (a < b && b < c) {
        dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return dp[a][b][c];
    }

    //나머지 경우
    dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return dp[a][b][c];
}

int main() {

    //입력
    while (true) {

        int a, b, c;
        cin >> a >> b >> c;

        //-1 -1 -1 입력시 종료
        if (a == -1 && b == -1 && c == -1) {
            break;
        }

        //결과
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }

}
