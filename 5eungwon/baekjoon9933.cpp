#include <iostream>
#include <string>
#include <algorithm>  //reverse�Լ��� ����ϱ� ����
using namespace std;
string k[100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	for (int i = 0; i < n; i++) {    //���ڿ��� �ϳ������غ��� �Ųٷ������� ���ڿ��� �������������� �װ��� ��й�ȣ�� �� ����.
		for (int j = i; j < n; j++) {
			string l;
			l = k[j];
			reverse(l.begin(), l .end());  //���ڿ��� �������ִ� �Լ�
			if (k[i] == l) {
				cout << l.length() << " " << l[l.length() / 2];   //���� �����Ѱ��� �����̾����Ƿ� ��� �Ŀ� �ٷ� �����Լ�����.
				return 0;
			}
		}
	}
}