#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>x;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		x.push_back(a);
	}
	sort(x.begin(), x.end(), greater<>());
	for (int i = 0; i < n - 2; i++) {
		int q = max({ x[i],x[i + 1],x[i + 2] });
		int summ = 0;
		int che = 0;
		for (int j = i; j < i + 3; j++) {
			if (q == x[j] && che == 0) {
				che = 1;
				continue;
			}
			summ += x[j];
		}
		if (q < summ) {
			cout << summ + q;
			return 0;
		}
	}
	cout << -1;
}