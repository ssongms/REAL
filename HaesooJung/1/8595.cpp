
#include <iostream>
#include <string>
#include<cmath>
using namespace std;


int main()
{
	int length;   // 입력될 문자열의 길이
	string givenString;  // 입력된 문자열
	long long count = 0; // 리턴될 히든넘버의 합
	char pickUp; // givenString에서 골라질 문자 하나

	cin >> length;
	cin >> givenString;

	for (int i = 0; i < length;)
	{
		int continueCheck = 1;
		pickUp = givenString[i];
		if ((int)pickUp >= '1' and (int)pickUp <= '9')  //선택한 문자열 인덱스가 숫자일 시
		{
			while ((int)givenString[i + continueCheck] >= '0' and (int)givenString[i + continueCheck] <= '9')
			{
				continueCheck++;// 연속된 숫자가 몇개 나오는지 확인
			}

			string resultString = givenString.substr(i, continueCheck);   //연속되는 숫자 문자열 substring화

			for (int j = 0; j < resultString.size(); j++)
			{
				count += (long long)((resultString[j] - '0') * (pow(10, resultString.size() - 1 - j))); // count에 히든넘버를 더함
			}

		
		}

		i = i + continueCheck;

	}

	cout << count;
	return 0;
}


				
