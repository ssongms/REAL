#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;       //�Է��� �ܾ�
	int length;			//�Է��� �ܾ��� �� ����
	long long int sum = 0;		//���� �ѹ��� ���� ����
	string temp_save;   //�� ����ѹ��� �ӽ������� �����ϱ� ���� ����
	cin >> length;
	cin >> input;
	for (int i = 0; i < length; i++) {
		if (isdigit(input[i])) {
			temp_save += input[i];
			
		}
		else {
			if (temp_save.length() > 6) {    //<����>���� �ѹ��� 6�ڸ��� ���� �ʴ´�
				temp_save.clear(); 
			}

			if (!temp_save.empty()) {        //temp_save�� ����ѹ��� �ִٸ� sum�� ���ϱ�
				sum += stoi(temp_save);      //stoi:string->int�� ��ȯ
				temp_save.clear();
			}
		}
		cout << "temp_save : " << temp_save << endl;
		cout << "sum : " << sum << endl;
	}
	if (!temp_save.empty() && temp_save.length() <= 6) {          //������ ���� �ѹ��� ���� �ڵ�δ� sum�� �������� ����
									   //sum�� �����ֱ� ���� ���������� �ڵ� �ѹ��� �ۼ�
		sum += stoi(temp_save);
		temp_save.clear();
	}
	
	cout << sum;
}