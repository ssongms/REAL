#include <iostream>
#include <vector>       //vector����� ����
#include <algorithm>    //reverse�Լ� ��� ����
using namespace std;

int main() {
	int input;				//�־����� �ܾ��� �� 
	string password;		//���� �Է��� �ܾ�
	int final_length = 0;	//��й�ȣ�� ����
	string middle_word;		//��й�ȣ�� ��� ����

	vector <string> passwordList;		//�Է��� �ܾ �����ϴ� vector
	vector <string> reverseList;		//�Է��� �ܾ��� reverse�� ���� �����ϴ� vector
	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> password;
		passwordList.push_back(password);
		reverse(password.begin(), password.end());
		reverseList.push_back(password);	//password�� reverse�� ���� �߰�!

	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (reverseList[i] == passwordList[j]) {      //�� vector�� ��ҵ��� ���ϸ� ���� ���ڿ� ã��

				string final_password = passwordList[j];  //��й�ȣ�� ��Ī�ϴ� ����
				final_length = final_password.length();
				middle_word = final_password[final_password.length() / 2];
				//(passwordList[j]).at((passwordList[j].length() - 1) / 2);
				break;
			}

		}
	}
	cout << final_length << " " << middle_word;
}