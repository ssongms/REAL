#include <iostream>
#include <string>
#include <algorithm>  //reverse함수를 사용하기 위해
using namespace std;
string k[100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	for (int i = 0; i < n; i++) {    //문자열을 하나씩비교해보며 거꾸로했을때 문자열이 같은것이있으면 그것이 비밀번호가 될 조건.
		for (int j = i; j < n; j++) {
			string l;
			l = k[j];
			reverse(l.begin(), l .end());  //문자열을 뒤집어주는 함수
			if (k[i] == l) {
				cout << l.length() << " " << l[l.length() / 2];   //답이 유일한것이 조건이었으므로 출력 후에 바로 메인함수종료.
				return 0;
			}
		}
	}
}