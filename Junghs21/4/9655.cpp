#include <iostream>

using namespace std;

int main() {

    //�Է¹޴� ���� ��
    int stones;
    cin >> stones;

    //���� ����� ���� ��Ģ���� �߰��ϰ� ����
    if (stones % 2 == 1) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
}
//����̰� ���� ����
//���� ����� �� ����
// 1    2   3   4   5   6   7   8   9   10
// s    c   s   c   s   c   s   c   s   c
//stones(N)�� 2���� �ԷµǸ� CK�� �̱� -> ���� 1~3�� �ƴ϶� 1, 3���� ������ �� �ִ�. �׷��� ����̰� �̱� �� �ִ� ����� ���� ����.