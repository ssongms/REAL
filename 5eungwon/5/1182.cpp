#include <iostream>
using namespace std;
int arr[20];
int n, k, answer = 0;
int ss = 0;
int check[20];
int ans[20];
int seq = 1;
int checking[20];
void cal(int a) {
	if (a == seq) {
		int sum = 0;
		for (int i = 0; i < seq; i++) {
			sum += ans[i];
		}
		if (k == sum) {    //찾는수와 같으면 경우의수변수 에 1더하기
			answer++;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (checking[i] == 0 && i >= ss) {
				ss = i;
				checking[i] = 1;
				ans[a] = arr[i];
				cal(a + 1);
				ss = i;
				checking[i] = 0;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {   //배열에서 몇개의수를 고를거냐고 각각다르므로 따로 for문사용
		ss = 0;
		cal(0);
		seq++;
	}
	cout << answer;
}