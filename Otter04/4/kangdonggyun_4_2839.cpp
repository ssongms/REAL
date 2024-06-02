#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int N;
	cin >> N;

	int arr[5001];
	
	fill_n(arr, 5001, -1);

	arr[3] = 1;
	arr[5] = 1;
	for (int i = 6; i <= N; i++) {
		if (arr[i - 3] == -1 && arr[i - 5] == -1) {
			arr[i] = -1;
		}
		else if (arr[i - 3] == -1) {
			arr[i] = arr[i - 5]+1;
		}
		else if (arr[i - 5] == -1) {
			arr[i] = arr[i - 3]+1;
		}
		else {
			arr[i] = min(arr[i - 3] + 1, arr[i - 5] + 1);
		}
	}
	count = arr[N];
	
	cout << count << endl;
	return 0;

}