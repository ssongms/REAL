#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int summ = 0;
	vector<int>box;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		box.push_back(a);
	}
	for (int i = box.size() - 2; i >= 0; i--) {
		while (box[i] >= box[i + 1]) {
			summ++;
			box[i]--;
		}
	}
	cout << summ;
}