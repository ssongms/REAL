#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
set<string>checking;  //�ߺ��Ȱ� üŷ���ִ� set����
int arr[8];    //���� �����迭
int check[8];    //�ߺ��ȼ��� ������� �ʰ��ϴ� üŷ�迭
int ans[8];    //�ѹ��� ����Ŭ�� ����� ������ ���� �迭
int n, m;
int ss = 0;
void cal(int a) {
	if (a == m) {
		string z = "";
		for (int i = 0; i < m; i++) {
			z += to_string(ans[i]);
		}
		if (checking.find(z) == checking.end()) {   //�ߺ�üũ
			checking.insert(z);
			for (int i = 0; i < m; i++) {
				cout << ans[i] << " ";
			}
			cout << '\n';
		}
		
	}
	else {
		for (int i = 0; i < n; i++) {    //���� ���ϱ�
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