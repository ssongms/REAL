#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> dataStack;      // 스택
	int n;             // 명령의 수
	string command;    // 명령어
	int num;           // push 연산 시, 스택에 넣을 정수
	int result = 0;    // 각 명령어의 결과값

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		// push구현
		if (command == "push") {
			cin >> Inputdata;
			dataStack.push(Inputdata);
		}

		// pop구현
		else if (command == "pop") {
			if (dataStack.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = dataStack.top();
				cout << result << endl;
				dataStack.pop();
			}
		}

		// size구현
		else if (command == "size") {
			cout << dataStack.size() << endl;
		}

		// empty구현
		else if (command == "empty") {
			if (dataStack.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		// top구현
		else if (command == "top") {
			if (dataStack.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = dataStack.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}