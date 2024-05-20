#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	vector <int> vectorData;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		vectorData.push_back(x);
	}
	sort(vectorData.begin(), vectorData.end());

	//next_permutation함수는 현재의 순열을 사전식 순서로 다음 순열로 변환해주는 함수이다.
	//다만, 사용하기 이전에 현재 순열이 사전식 순서로 정렬되어 있어야 한다.


	set <string> stringData; // set이 사용된 이유는 중복된 값을 제거할 수 있기 때문이다.
	do {
		string result;
		for (int i = 0; i < b; i++) {
			result += to_string(vectorData[i]);
		}
		stringData.insert(result);
	} while (next_permutation(vectorData.begin(), vectorData.end()));
	cout << stringData.size();
}