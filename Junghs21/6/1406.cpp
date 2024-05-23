#include <iostream>
#include <stack>
#include <vector>

using namespace std;

//���� ����
stack<char> s;
//�߰� ������ ������ �ٸ� ���� ����
stack<char> storeValue;
//Ŀ���� ǥ���� location ���� ����
int location = 0;

//Ŀ���� �������� �� ĭ �ű�� L�Լ�
void L() {

	//Ŀ���� �� �����̸� ����, �ƴϸ� Ŀ���� �������� �� ĭ �ű�
	if (location == 0) {
		return;
	}
	else {
		location--;
	}

}

//Ŀ���� ���������� �� ĭ �ű�� D�Լ�
void D() {

	//Ŀ���� �ǿ������̸� ����, �ƴϸ� ���������� �� ĭ �ű�
	if (location == s.size()) {
		return;
	}
	else {
		location++;
	}

}

//Ŀ�� ���ʿ� �ִ� ���ڸ� ����� B�Լ�
void B() {

	//�� �����̸� ����
	if (location == 0) {
		return;
	}
	else {
		while (s.size() > location) { //location��ġ������ ������ �����Ͽ� storeValue�� ������ ����
			char temp = s.top();
			s.pop();
			storeValue.push(temp);
		}

		//location��ġ�� ���� ���� ����
		s.pop();
		location--;

		//������ ���� ������ storeValue�� ����� ������ �ٽ� ����
		while (!storeValue.empty()) {
			s.push(storeValue.top());
			storeValue.pop();
		}
	}

}

//Ŀ�� ���ʿ� ���� �߰��ϴ� P�Լ�
void P() {

	char text;
	cin >> text;

	//location��ġ������ ������ �����Ͽ� storeValue�� ������ ����
	while (s.size() > location) {
		char temp = s.top();
		s.pop();
		storeValue.push(temp);
	}

	//Ŀ�� ���ʿ� �߰�
	s.push(text);
	location++;

	//storeValue�� ������ ������ �ٽ� �����·� ����
	while (!storeValue.empty()) {
		s.push(storeValue.top());
		storeValue.pop();
	}

}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	//�����⿡ �ԷµǾ� �ִ� ���ڿ��� �Է�
	string function;
	cin >> function;

	//Ŀ�� ��ġ�� ���ڿ� �� ���������� ����
	location = function.size();

	//stack�� �����⿡ �ԷµǾ� �ִ� ���ڿ� �Է�
	for (int i = 0; i < function.size();i++) {
		s.push(function[i]);
	}

	//��ɾ� Ƚ�� �Է�
	int end;
	cin >> end;	

	for (int i = 0; i < end;i++) {

		//������ ��ɾ� �Է�
		char toDo;
		cin >> toDo;

		if (toDo == 'L') {
			L();
		}
		else if (toDo == 'D') {
			D();
		}
		else if (toDo == 'B') {
			B();
		}
		else if (toDo == 'P') {
			P();
		}
	}

	stack<char> tempStack;

	//������ LIFO ���� �̹Ƿ� ����� ����ϱ� ���� �ٸ� ������ push�� ���
	while (!s.empty()) {
		tempStack.push(s.top());
		s.pop();
	}

	while (!tempStack.empty()) {
		cout << tempStack.top();
		tempStack.pop();
	}

}
//�ð��ʰ�!