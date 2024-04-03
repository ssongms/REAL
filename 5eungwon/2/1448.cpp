#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	int n;
	cin >> n;
	vector<int>x;
	for (int i = 0; i < n; i++) {   //벡터에 각 변 넣어줌
		int a;
		cin >> a;
		x.push_back(a);
	}
	sort(x.begin(), x.end(), greater<>());   //내림차순으로  정렬
	for (int i = 0; i < n - 2; i++) {
		int q = max({ x[i],x[i + 1],x[i + 2] });   //0번째 변부터 n-3번 변까지 3개씩 확인해서 가장큰값을 가장 긴변으로 정한 후 삼각형의 조건을 만족하면 합 구한후 
		int summ = 0;
		int che = 0;
		for (int j = i; j < i + 3; j++) {
			if (q == x[j] && che == 0) {
				che = 1;
				continue;
			}
			summ += x[j];
		}
		if (q < summ) {   //각 구한 합의 최대값 갱신
			cout << summ + q;
			return 0;
		}
	}
	cout << -1;   //못만들면 -1출력
}