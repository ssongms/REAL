#include <iostream>
using namespace std;

int main() {
	int rock_count;
	cin >> rock_count;
	if (rock_count % 2 == 1) {
		cout << "SK" << endl;
	}
	else {
		cout << "CY" << endl;
	}
}