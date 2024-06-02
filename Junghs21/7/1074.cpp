#include <iostream>
#include <cmath>

using namespace std;

int Z(int n, int r, int c) {

    if (n == 0) {
        return 0;
    }

    //�� ���� ������ ����
    int half = pow(2, n - 1);
    //�� ������ ũ��
    int area = half * half;

    //r�� c�� ��ġ�� ��и鿡 ���� ������ ���
    if (r < half && c < half) { //1��и�
        return Z(n - 1, r, c);
    }
    else if (r < half && c >= half) { //2��и�
        return area + Z(n - 1, r, c - half);
    }
    else if (r >= half && c < half) { //3��и�
        return 2 * area + Z(n - 1, r - half, c);
    }
    else { //4��и�
        return 3 * area + Z(n - 1, r - half, c - half);
    }
}

int main() {

    int n, r, c;
    cin >> n >> r >> c;

    cout << Z(n, r, c) << endl;

}