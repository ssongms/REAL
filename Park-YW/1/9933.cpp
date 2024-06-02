#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> numbers;
int amount;

int reverse(string a, string b)		//두 문자열이 서로 뒤집혀 있는지 확인, T/F로 반환 
{
	if (a.length() != b.length())	//길이확인
	{
		return false;	
	}
	for (int index = 0; index < a.length(); index++)	//서로 앞쪽과 뒤쪽부터 대조하면 확인
	{
		if (a[index] != b[a.length() - index - 1]) {
			return false;
		}
	}
	cout << a.length() << " " << a[a.length() / 2];	//결과 출력
	return true;
}

int main()
{
	cin >> amount;
	numbers.resize(amount);
	for (int index = 0; index < amount; index++)
	{
		cin >> numbers[index];
	}

	for (int i = 0; i < amount; i++)
	{
		for (int j = i; j < amount; j++)	
		{
			if (reverse(numbers[i], numbers[j])) {
				return 0;	//if문이 성립할 경우 더 반복할 이유가 없으므로 코드 종료
			}
		}
	}
}
