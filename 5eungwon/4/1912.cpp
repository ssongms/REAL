#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int* arr = new int[n]; //배열 동적할당
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = arr[0];    //배열의 첫번째값 저장
	int max = arr[0];    //배열의 첫번째값 저장
	int check = 0;       //모든 수가 음수일때를 처리할 변수
	for (int i = 1; i < n; i++) {  //배열의 마지막인덱스까지 탐색
		if (arr[i] >= 0) {       //배열이 양수라면 무조건 더하고봐도 상관x
			check = 1;    
			sum += arr[i];
			if (max < sum) {   
				max = sum;
			}
		}
		else if (arr[i] < 0) {        //값이 음수일때 지금까지 더한 양수들의 합과 절대값을 비교한후 지금까지 더한게 더크면 음수값도 포합해서 sum에 더해줌
			if (sum > abs(arr[i])) {
				sum += arr[i];
			}
			else {        //그렇지않으면 0으로 만드는게 더 크다는 의미이므로 sum = 0으로 만든다.
				sum = 0;
			}  
			if (max < sum) {     //최댓값 갱신
				max = sum;
			}
		}
	}
	if (check == 1) {
		cout << max;
	}
	else {                 //모든 수가 음수일때 가장 큰 음수를 출력
		int min = -1001;
		for (int i = 0; i < n; i++) {
			if (min < arr[i]) {
				min = arr[i];
			}
		}
		cout << min;
	}

}