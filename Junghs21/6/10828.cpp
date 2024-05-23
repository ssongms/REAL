#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

//���� ������ ������ ���� ���� ����
stack<int> s;
//��� ������ ������ ���� ����
vector<int> values;

//push �Լ�
void push() {

	int num;
	cin >> num;
	
	//���� �Է¹ް� ���ÿ� push
	s.push(num);
}

//pop �Լ�
void pop() {

	int result;

	//������ ������� ������
	if (!s.empty()) {
		//������ ������ ���� result�� ����
		result = s.top();
		
		//������ ������ ���� ������, ���Ϳ� �ش� ���� ����
		s.pop();
		values.push_back(result);
	}//������ ����ٸ�
	else {
		//-1�� ����ؾ��ϴ� -1�� ���Ϳ� ����
		result = -1;
		values.push_back(result);
	}
}

//size �Լ�
void size() {
	//������ size�� ��ȯ�Ͽ� ���Ϳ� ����
	values.push_back(s.size());
}

//empty �Լ�
void empty() {

	//������ ������� 1, �ƴϸ� 0�� empty�Լ� ��� ���� ���Ϳ� ����
	if (s.empty()) {
		values.push_back(1);
	}
	else {
		values.push_back(0);
	}
}

//top �Լ�
void top() {

	int result;

	//������ ������� �ʴٸ�
	if (!s.empty()) {
		result = s.top();
		//������ ������ ���� ���Ϳ� ����
		values.push_back(result);
	}//����ֵ���
	else {
		//-1�� ���Ϳ� ����
		result = -1;
		values.push_back(result);
	}
}

int main() {

	//��� Ƚ�� �Է�
	int end;
	cin >> end;

	for (int i = 0; i < end;i++) {

		//���
		string function;
		cin >> function;

		if (function == "push") {
			push();
		}
		else if (function == "pop") {
			pop();
		}
		else if (function == "size") {
			size();
		}
		else if (function == "empty") {
			empty();
		}
		else if (function == "top") {
			top();
		}
	}

	//���͸� ���� ��� ���
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] << endl;
	}

}