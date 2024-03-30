#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;       //입력할 단어
	int length;			//입력할 단어의 총 길이
	long long int sum = 0;		//히든 넘버의 합을 저장
	string temp_save;   //각 히든넘버를 임시적으로 저장하기 위한 변수
	cin >> length;
	cin >> input;
	for (int i = 0; i < length; i++) {
		if (isdigit(input[i])) {
			temp_save += input[i];
			
		}
		else {
			if (temp_save.length() > 6) {    //<조건>히든 넘버는 6자리를 넘지 않는다
				temp_save.clear(); 
			}

			if (!temp_save.empty()) {        //temp_save에 히든넘버가 있다면 sum에 더하기
				sum += stoi(temp_save);      //stoi:string->int로 변환
				temp_save.clear();
			}
		}
		cout << "temp_save : " << temp_save << endl;
		cout << "sum : " << sum << endl;
	}
	if (!temp_save.empty() && temp_save.length() <= 6) {          //마지막 히든 넘버는 위의 코드로는 sum에 더해지지 않음
									   //sum에 더해주기 위해 마지막으로 코드 한번더 작성
		sum += stoi(temp_save);
		temp_save.clear();
	}
	
	cout << sum;
}