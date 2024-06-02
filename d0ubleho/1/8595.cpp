#include <iostream>
#include <string>
using namespace std;

int main() {
	long long length, sum = 0;
	string word;
	string list = "", temp = "";

	cin >> length >> word;

	for (int i = 0; i < length; i++) {
		if (isdigit(word[i])) {
			list.append(1, word[i]);
		}
		else {
			list.append(1, ' ');
		}
	}

	for (char ch : list) {
		if (isdigit(ch)) {
			temp += ch;
		}
		else if (temp.length() > 0) {
			sum += stoi(temp);
			temp = "";
		}
	}

	if (temp.length() > 0) {
		sum += stoi(temp);
	}

	cout << sum;

	return 0;
}