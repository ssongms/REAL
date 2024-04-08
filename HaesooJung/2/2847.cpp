#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()

{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);


	int counter;   //입력될 레벨의 수
	cin >> counter;
	int temp = 0;
	int* levels = new int[counter];  //레벨을 Array에 동적할당
	for (int i = 0; i < counter; i++)
	{
		int userInput;    
		cin >> userInput;   //레벨의 경험치 입력
		levels[i] = userInput;   //Array에 할당
	}


	for (int i = counter - 2; i > -1; i--)
	{
		if (levels[i] >= levels[i + 1])
		{
			temp = temp + levels[i] - levels[i + 1] + 1; // 레벨의 경험치를 줄인 뒤, 줄인 경험치 양을 수정하면 0가 된다. 따라서 줄일 경험치 양을 미리 누적시켜야 한다.
			levels[i] -= levels[i] - levels[i + 1] + 1; // 이후 하위 레벨의 경험치를 수정한다.
			
		}
	}



	cout << temp;

	return 0;
}
