#include <iostream>
using namespace std;


int rev(int a, int b, int c);
int storage[21][21][21];


int main() {

	int a, b, c;







	while (true)
	{
		cin >> a >> b >> c;

		if (a == -1 and b == -1 and c == -1)
			break;



		int result = rev(a, b, c);
		cout << "w(" << a << ", " << b << ", " << c << ") = " << result << endl;


		





	}





	return 0;


}



int rev(int a, int b, int c)
{
	if (a <= 0 or b <= 0 or c <= 0)
		return 1;     //base case


	else if (a > 20 or b > 20 or c > 20)
		return rev(20, 20, 20);  // general case 1


	else if (storage[a][b][c])   // memoization!! 해당 연산이 끝났으면 저장되어 있을 것이고, 저장된 값이 있으면 바로 return
	{
		return storage[a][b][c];
	}




	else if (a < b and b < c) {
		storage[a][b][c] = rev(a, b, c - 1) + rev(a, b - 1, c - 1) - rev(a, b - 1, c);  // general case 1
		return storage[a][b][c];
	}


	storage[a][b][c] = rev(a - 1, b, c) + rev(a - 1, b - 1, c) + rev(a - 1, b, c - 1) - rev(a - 1, b - 1, c - 1);  //general case 2
	return storage[a][b][c];


}