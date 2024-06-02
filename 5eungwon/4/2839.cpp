#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	k = n / 5;
	if (n == 4 || n == 7) {  //n이 4일경우나 7일경우에는 불가능하므로 -1출력
		cout << -1;
	}
	else {
		if (n % 5 == 1) {     //이외의 케이스들 정리
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