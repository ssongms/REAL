#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	k = n / 5;
	if (n == 4 || n == 7) {  //n�� 4�ϰ�쳪 7�ϰ�쿡�� �Ұ����ϹǷ� -1���
		cout << -1;
	}
	else {
		if (n % 5 == 1) {     //�̿��� ���̽��� ����
			cout << k + 1;
		}
		else if (n % 5 == 3) {
			cout << k + 1;
		}
		else if (n % 5 == 0) {
			cout << k;
		}
		else if (n % 5 == 4) {
			cout << k + 2;
		}
		else if (n % 5 == 2) {
			cout << k + 2;
		}
	}
}