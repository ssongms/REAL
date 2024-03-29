#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ansnum = 0;  //진화 가능한 총 포켓몬 수를 저장
	int maxnum = 0;   //각각의 포켓몬 중 가장 많이 진화가능한 포켓몬 의 진화 가능 수 저장
	string ansname;   //그 때의 포켓몬 이름 저장
	for (int i = 0; i < n; i++) {
		string k;
		int a, b;
		int num = 0;
		cin >> k;      //포켓몬 이름 받고
		cin >> a >> b;    //진화 할때 필요한 개수와 현재 갖고있는 사탕개수 입력받음
		while (b - a >= 0) {   //현재갖고있는 사탕개수보다 진화할때 필요한 사탕의 개수가 더 많아지면 break
			b -= a;         //현재 사탕에서 진화사탕 빼줌
			num++;          //진화 횟수 저장
			b += 2;         //사탕2개 payback받는 다는 조건 적용
		}
		ansnum += num;      //구해야할 총 진화수 변수에 더한다.
		if (maxnum < num) { // 지금포켓몬이 포켓몬 진화가능수 중 최대라면 그 수를 maxnum에 저장하고,
			maxnum = num;
			ansname = k;    //이름도 저장
		}
	}
	cout << ansnum << '\n';   //총 진화가능수와
	cout << ansname;          // 최다진화 가능 포켓몬 이름 출력
}