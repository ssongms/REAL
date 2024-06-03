#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, m, k;
	int c = 0;
	cin >> n >> m >> k;
	int a = m + 1;
	int b = k + 1;
	while (n != 0) {
		if (a > pow(2, n - 1) && b > pow(2, n - 1)) {
			c += pow(2, n - 1) * pow(2, n - 1) * 3;
			a = a - pow(2, n - 1);
			b = b - pow(2, n - 1);
		}
		else if (a > pow(2, n - 1) && b <= pow(2, n - 1)) {
			c += pow(2, n - 1) * pow(2, n - 1) * 2;
			a = a - pow(2, n - 1);
		}
		else if (a <= pow(2, n - 1) && b > pow(2, n - 1)) {
			c += pow(2, n - 1) * pow(2, n - 1) * 1;
			b = b - pow(2, n - 1);
		}
		else if (a <= pow(2, n - 1) && b <= pow(2, n - 1)) {

		}
		--n;
	}
	cout << c;
}