#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001], sum[1000001], ret = -10001;

int main() {
	int n;
	cin >> n;	//입력받는 수의 개수
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sum[0] = arr[0];

	for (int i = 1; i < n; i++) {
		sum[i] = max(sum[i - 1] + arr[i], arr[i]);
		/*ret = sum[i];*/
	}

	int a = -1001;
	for (int i = 0; i < n; i++) {
		a = max(a, sum[i]);
	}
	cout << a;
	return 0;
}