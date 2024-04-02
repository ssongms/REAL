#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string input;
	vector<int> numbers;
	int hidden;
	long long int result = 0;	


	cin >> hidden;	//입력값 제거용, 활용x
	cin >> input;

	hidden = 0;
	for (int i = 0; i < input.length(); i++) {
		if (47 < input[i] && input[i] < 58) {	//정수인지 확인(아스키 코드값)
			hidden = hidden * 10 + input[i] - 48;	//숫자가 연속될 경우 이전값을 다음 자릿수로 이동해 저장
			if (input[i + 1] > 57) {	//다음 값이 문자인지 확인
				result += hidden;		//시크릿 넘버가 끝난 것이므로 결과값에 가산
				hidden = 0;
			}
		}
	}
	if (hidden != 0) {
		result += hidden;	//숫자로 끝난 경우 마지막 값을 결과값에 가산
	}

	cout << result;

}