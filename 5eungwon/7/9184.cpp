#include <iostream>

int store[21][21][21];

int solve(int a, int b, int c);

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int a, b, c;
	while (true)
	{
		std::cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			break;

		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << solve(a, b, c) << '\n';
	}
}

int solve(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;

	if (a > 20 || b > 20 || c > 20)
		return solve(20, 20, 20);

	if (store[a][b][c])
		return store[a][b][c];

	if (a < b && b < c)
	{
		store[a][b][c] = solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
		return store[a][b][c];
	}

	store[a][b][c] = solve(a - 1, b, c) + solve(a - 1, b - 1, c) + solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1);
	return store[a][b][c];
}
