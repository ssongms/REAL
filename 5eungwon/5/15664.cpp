#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
set<string>checking;  //중복된거 체킹해주는 set선언
int arr[8];    //값을 받을배열
int check[8];    //중복된수를 출력하지 않게하는 체킹배열
int ans[8];    //한번의 사이클에 출력할 값들을 담을 배열
int n, m;
int ss = 0;
void cal(int a) {
	if (a == m) {
		string z = "";
		for (int i = 0; i < m; i++) {
			z += to_string(ans[i]);
		}
		if (checking.find(z) == checking.end()) {   //중복체크
			checking.insert(z);
			for (int i = 0; i < m; i++) {
				cout << ans[i] << " ";
			}
			cout << '\n';
		}
		
	}
	else {
		for (int i = 0; i < n; i++) {    //조합 구하기
			if (check[i] == 0 && i>=ss) {   
				check[i] = 1;
				ans[a] = arr[i];
				ss = i;
				cal(a + 1);
				ss = i;
				check[i] = 0;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cal(0);
}