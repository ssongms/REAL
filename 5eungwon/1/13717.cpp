#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ansnum = 0;  //��ȭ ������ �� ���ϸ� ���� ����
	int maxnum = 0;   //������ ���ϸ� �� ���� ���� ��ȭ������ ���ϸ� �� ��ȭ ���� �� ����
	string ansname;   //�� ���� ���ϸ� �̸� ����
	for (int i = 0; i < n; i++) {
		string k;
		int a, b;
		int num = 0;
		cin >> k;      //���ϸ� �̸� �ް�
		cin >> a >> b;    //��ȭ �Ҷ� �ʿ��� ������ ���� �����ִ� �������� �Է¹���
		while (b - a >= 0) {   //���簮���ִ� ������������ ��ȭ�Ҷ� �ʿ��� ������ ������ �� �������� break
			b -= a;         //���� �������� ��ȭ���� ����
			num++;          //��ȭ Ƚ�� ����
			b += 2;         //����2�� payback�޴� �ٴ� ���� ����
		}
		ansnum += num;      //���ؾ��� �� ��ȭ�� ������ ���Ѵ�.
		if (maxnum < num) { // �������ϸ��� ���ϸ� ��ȭ���ɼ� �� �ִ��� �� ���� maxnum�� �����ϰ�,
			maxnum = num;
			ansname = k;    //�̸��� ����
		}
	}
	cout << ansnum << '\n';   //�� ��ȭ���ɼ���
	cout << ansname;          // �ִ���ȭ ���� ���ϸ� �̸� ���
}