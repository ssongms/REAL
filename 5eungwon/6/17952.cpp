#include <iostream>
#include <stack>
using namespace std;
struct aaa {
	int point, time;
};
stack<aaa>cal;
int main() {
	int answer = 0;
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int b, c;
			cin >> b >> c;
			cal.push({ b,c });
			--cal.top().time;
			if (cal.top().time == 0) {
				answer += cal.top().point;
				cal.pop();
			}
		}
		else {
			if (cal.empty() != 1) {
				cal.top().time--;
				if (cal.top().time == 0) {
					answer += cal.top().point;
					cal.pop();
				}
			}
		}
	}
	cout << answer;
}