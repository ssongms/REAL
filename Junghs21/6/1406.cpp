#include <iostream>
#include <stack>
#include <vector>

using namespace std;

//스택 선언
stack<char> s;
//중간 연산을 도와줄 다른 스택 선언
stack<char> storeValue;
//커서를 표현할 location 변수 선언
int location = 0;

//커서를 왼쪽으로 한 칸 옮기는 L함수
void L() {

	//커서가 맨 왼쪽이면 종료, 아니면 커서를 왼쪽으로 한 칸 옮김
	if (location == 0) {
		return;
	}
	else {
		location--;
	}

}

//커서를 오른쪽으로 한 칸 옮기는 D함수
void D() {

	//커서가 맨오른쪽이면 종료, 아니면 오른쪽으로 한 칸 옮김
	if (location == s.size()) {
		return;
	}
	else {
		location++;
	}

}

//커서 왼쪽에 있는 문자를 지우는 B함수
void B() {

	//맨 왼쪽이면 종료
	if (location == 0) {
		return;
	}
	else {
		while (s.size() > location) { //location위치까지의 값들을 추출하여 storeValue에 저장후 제거
			char temp = s.top();
			s.pop();
			storeValue.push(temp);
		}

		//location위치의 왼쪽 값을 제거
		s.pop();
		location--;

		//제거한 값을 제외한 storeValue에 저장된 값들을 다시 넣음
		while (!storeValue.empty()) {
			s.push(storeValue.top());
			storeValue.pop();
		}
	}

}

//커서 왼쪽에 값을 추가하는 P함수
void P() {

	char text;
	cin >> text;

	//location위치까지의 값들을 추출하여 storeValue에 저장후 제거
	while (s.size() > location) {
		char temp = s.top();
		s.pop();
		storeValue.push(temp);
	}

	//커서 왼쪽에 추가
	s.push(text);
	location++;

	//storeValue에 저장한 값들을 다시 원상태로 복구
	while (!storeValue.empty()) {
		s.push(storeValue.top());
		storeValue.pop();
	}

}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	//편집기에 입력되어 있는 문자열을 입력
	string function;
	cin >> function;

	//커서 위치를 문자열 맨 오른쪽으로 설정
	location = function.size();

	//stack에 편집기에 입력되어 있는 문자열 입력
	for (int i = 0; i < function.size();i++) {
		s.push(function[i]);
	}

	//명령어 횟수 입력
	int end;
	cin >> end;	

	for (int i = 0; i < end;i++) {

		//실행할 명령어 입력
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

	//스택은 LIFO 구조 이므로 뒤집어서 출력하기 위해 다른 변수에 push후 출력
	while (!s.empty()) {
		tempStack.push(s.top());
		s.pop();
	}

	while (!tempStack.empty()) {
		cout << tempStack.top();
		tempStack.pop();
	}

}
//시간초과!