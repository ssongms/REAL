#include <iostream>
#include <set>
using namespace std;
set<string>check;
string arr[10];
string ans[4];
int checking[10];
int n, k;
void cal(int a) {
	if (a == k) {
		string z = "";
		for (int i = 0; i < k; i++) {
			z += ans[i];
		}
		if (check.find(z) == check.end()) {   //중복된 문자열이 check에있을경우에는 set에 넣지않음
			check.insert(z);
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (checking[i] == 0) {
				checking[i] = 1;
				ans[a] = arr[i];
				cal(a + 1);
				checking[i] = 0;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cal(0);
	cout << check.size();   //중복되지 않은 경우의수 모두 출력
}