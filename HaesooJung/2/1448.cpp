#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long counter;
	long long maxLength = 0;
	cin >> counter;
	long long* ptr = new long long[counter];
	for (long long i = 0; i < counter; i++)
	{
		long long userInput;
		cin >> userInput;
		ptr[i] = userInput;
	}

	sort(ptr, ptr + counter);
	for (long long i = counter-1; i >1; i--)
	{
		if (ptr[i] < ptr[i - 1] + ptr[i - 2] and maxLength < ptr[i] + ptr[i - 1] + ptr[i - 2])
		{
			maxLength = ptr[i] + ptr[i - 1] + ptr[i - 2];
			break;
		}

	}


	if (maxLength == 0)
	{
		cout << -1;
	}

	else
	{
		cout << maxLength;
	}


	return 0;
	
}