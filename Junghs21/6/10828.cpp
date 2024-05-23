#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

//스택 연산을 수행할 스택 변수 선언
stack<int> s;
//결과 값들을 저장할 벡터 선언
vector<int> values;

//push 함수
void push() {

	int num;
	cin >> num;
	
	//값을 입력받고 스택에 push
	s.push(num);
}

//pop 함수
void pop() {

	int result;

	//스택이 비어있지 않으면
	if (!s.empty()) {
		//스택의 맨위의 값을 result에 저장
		result = s.top();
		
		//스택의 맨위의 값을 제거후, 벡터에 해당 값을 저장
		s.pop();
		values.push_back(result);
	}//스택이 비었다면
	else {
		//-1을 출력해야하니 -1을 벡터에 저장
		result = -1;
		values.push_back(result);
	}
}

//size 함수
void size() {
	//스택의 size를 반환하여 벡터에 저장
	values.push_back(s.size());
}

//empty 함수
void empty() {

	//스택이 비었으면 1, 아니면 0의 empty함수 결과 값을 벡터에 저장
	if (s.empty()) {
		values.push_back(1);
	}
	else {
		values.push_back(0);
	}
}

//top 함수
void top() {

	int result;

	//스택이 비어있지 않다면
	if (!s.empty()) {
		result = s.top();
		//스택의 맨위의 값을 벡터에 저장
		values.push_back(result);
	}//비어있따면
	else {
		//-1을 벡터에 저장
		result = -1;
		values.push_back(result);
	}
}

int main() {

	//명령 횟수 입력
	int end;
	cin >> end;

	for (int i = 0; i < end;i++) {

		//명령
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

	//벡터를 통해 결과 출력
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] << endl;
	}

}