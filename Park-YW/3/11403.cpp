#include<iostream>

using namespace std;

int amount = 0;

int main()
{
	cin >> amount;

	//2차원 행렬 동적할당
	int** arr = new int* [amount];
	for (int i = 0; i < amount; i++)
		arr[i] = new int[amount];

	//입력
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount; j++)
		{
			cin >> arr[i][j];
		}
	}

	//추이관계 확인
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount; j++)
		{
			for (int k = 0; k < amount; k++)
			{
				if (arr[j][i] == 1 && arr[i][k] == 1)
				{
					arr[j][k] = 1;
				}
			}
		}
	}

	//출력
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	```

}