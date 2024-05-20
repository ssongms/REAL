#include<iostream>
#include<algorithm>
#include<set>
#include<string>

using namespace std;

int amount;
int M;
int* arr;
set<string> isHave;

void check(int length, int num, bool plus, string part)
{
	if (plus)
	{
		part += to_string(arr[num]);
		++length;
	}

	if (length == M)
	{
		if (!isHave.count(part))
		{
			isHave.insert(part);
			for (int i = 0; i < M; ++i)
				cout << part[i] << " ";
			cout << endl;
		}
		return;
	}

	if (num < amount - 1)
	{
		check(length, num + 1, true, part);
		check(length, num + 1, false, part);
	}

}

int main()
{
	cin >> amount;
	cin >> M;

	arr = new int[amount];

	for (int index = 0; index < amount; index++)
	{
		cin >> arr[index];
	}

	sort(arr, arr + amount);

	check(0, 0, true, "");
	check(0, 0, false, "");
}