#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int t;
	int i;

	cin >> t;
	stack <int> good;
	string ccc = "";
	for (i = 0; i < t + 1; i++) {
		getline(cin, ccc);
		if (ccc == "pop") {
			if (good.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << good.top() << endl;
			good.pop();
		}
		else if (ccc == "size") {
			cout << good.size() << endl;
		}
		else if (ccc == "empty") {
			if (good.size() == 0) {
				cout << 1 << endl;
			}
			else if (good.size() != 0) {
				cout << 0 << endl;
			}
		}
		else if (ccc == "top") {
			if (good.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << good.top() << endl;
		}
		else if (ccc.substr(0, 4) == "push") {
			good.push(stoi(ccc.substr(5, ccc.length() - 5)));
		}
	}

}