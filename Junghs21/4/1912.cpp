#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	//정수 갯수 입력
	int N;
	cin >> N;

	//최종 결과를 출력할 변수
	int result = -1000;

	//N개 만큼 숫자를 입력
	vector<int> nums(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	//연속된 숫자들의 합을 저장할 변수
	vector<int> dp(N, 0);
	//dp[0]을 첫번째로 입력받은 숫자 저장
	dp[0] = nums[0];
	//dp[0]에 입력한 첫번째 숫자를 제외하고 [1](즉, 2번째)과 [0]을 더한 후 비교
	for (int i = 1; i < N; i++) {
		//현재 위치의 숫자와 연속된 숫자들의 합 비교
		//연속된 숫자의 합들 보다 현재 위치(한 개)의 숫자가 더 크면 현재 위치의 숫자 저장
		dp[i] = max(nums[i], dp[i - 1] + nums[i]);
		//result와 dp에 저장된 숫자(연속된 숫자들의 합)들의 값을 비교
		result = max(result, dp[i]);
	}

	//위의 for조건식에서 1부터 시작해서 0번째 인덱스의 크기를 비교하지 못했으니 현재 가장 큰 숫자들의 합을 가진 result와 dp[0]비교
	//예시로 -1 -2 -3 -4 -5가 나왔을 때 이 코드가 없으면 결과로 -1이 아닌 -2가 출력됨
	if (result < dp[0]) {
		result = dp[0];
	}

	//결과 출력
	cout << result;

}