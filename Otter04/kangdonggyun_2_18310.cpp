#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int N;	//집의 수
	cin >> N;
	int home_locate;	//집의 위치
	int an_locate;		//안테나 위치
	vector<int> hl_list(N);	//집의 위치들을 정렬한 vector
	int sum = 0;		//안테나로부터 각 집까지의 거리의 합
	int an_min=0;		//최종적으로 안테나의 위치
	int min = 0;		//집의 위치 중 가장 위칫값이 작은 변수
	int max = 0;		//집의 위치 중 가장 위칫값이 큰 변수
	int temp = 0;
	for (int i = 0; i < N; i++) {
		cin >> home_locate;
		hl_list[i] = home_locate;
		an_min += home_locate;
		if (hl_list[i] > max) {
			max = hl_list[i];
		}
		if (hl_list[i] < min) {
			min = hl_list[i];
		}
	}
		
	for (int j = min; j <= max;j++) {
		for (int i = 0; i < N;i++) {
			sum+=abs(hl_list[i] - j);
		}
		if (an_min > sum) {
			an_min = sum;
			temp = j;
		}
		sum = 0;
	}
	cout << temp;
	return 0;
}