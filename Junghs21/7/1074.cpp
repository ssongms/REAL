#include <iostream>
#include <cmath>

using namespace std;

int Z(int n, int r, int c) {

    if (n == 0) {
        return 0;
    }

    //한 변의 길이의 절반
    int half = pow(2, n - 1);
    //한 구역의 크기
    int area = half * half;

    //r과 c가 위치한 사분면에 따라 순서를 계산
    if (r < half && c < half) { //1사분면
        return Z(n - 1, r, c);
    }
    else if (r < half && c >= half) { //2사분면
        return area + Z(n - 1, r, c - half);
    }
    else if (r >= half && c < half) { //3사분면
        return 2 * area + Z(n - 1, r - half, c);
    }
    else { //4사분면
        return 3 * area + Z(n - 1, r - half, c - half);
    }
}

int main() {

    int n, r, c;
    cin >> n >> r >> c;

    cout << Z(n, r, c) << endl;

}