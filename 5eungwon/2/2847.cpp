#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int summ = 0;
	vector<int>box;
	for (int i = 0; i < n; i++) {   //n�� ��ŭ ���Ӻ��� �Է¹���
		int a;
		cin >> a;
		box.push_back(a);
	}
	for (int i = box.size() - 2; i >= 0; i--) {   //������ �ε����� �� -1 ���� Ž���Ͽ� i�� ���� i+1�� ������ �۾��������� ���� -1 
		while (box[i] >= box[i + 1]) {
			summ++;       //Ƚ���� summ������ ����
			box[i]--;
		}
	}
	cout << summ;   //summ ���
}