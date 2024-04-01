#include <iostream>
#include <vector>       //vector사용을 위해
#include <algorithm>    //reverse함수 사용 위해
using namespace std;

int main() {
	int input;				//주어지는 단어의 수 
	string password;		//내가 입력할 단어
	int final_length = 0;	//비밀번호의 길이
	string middle_word;		//비밀번호의 가운데 글자

	vector <string> passwordList;		//입력할 단어를 저장하는 vector
	vector <string> reverseList;		//입력할 단어의 reverse된 것을 저장하는 vector
	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> password;
		passwordList.push_back(password);
		reverse(password.begin(), password.end());
		reverseList.push_back(password);	//password의 reverse된 버전 추가!

	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (reverseList[i] == passwordList[j]) {      //두 vector의 요소들을 비교하며 같은 문자열 찾기

				string final_password = passwordList[j];  //비밀번호를 지칭하는 변수
				final_length = final_password.length();
				middle_word = final_password[final_password.length() / 2];
				//(passwordList[j]).at((passwordList[j].length() - 1) / 2);
				break;
			}

		}
	}
	cout << final_length << " " << middle_word;
}