#include <iostream>
#include <queue>
using namespace std;
char map[600][600];  //맵 만들기
int ans = 0;
class aaa {   // x좌표와 y좌표를 한번해처리할 클래스 aaa선언
public:
	int x, y;
	aaa(int a, int b) {
		x = a;
		y = b;
	}
};
int main() {
	int n, m;
	int x1, y1;   //시작위치 확인할 변수
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {  //맵그리기 I를 입력받은경우 시작위치 저장.
			cin >> map[i][j];
			if (map[i][j] == 'I') {
				x1 = i;
				y1 = j;
			}
		}
	}
	queue<aaa>cal;
	cal.push(aaa(x1, y1));
	map[x1][y1] = 'X';
	while (cal.empty() != 1) {    //BFS 상하좌우 확인하면서 P발견하면 발견자수변수++ 한번간곳은 더이상갈필요없으므로 중복처리
		aaa p = cal.front(); cal.pop();
		if (p.x + 1 < n && map[p.x + 1][p.y] != 'X') {
			if (map[p.x + 1][p.y] == 'P') {
				ans++;
			}
			map[p.x + 1][p.y] = 'X';
			cal.push(aaa(p.x + 1, p.y));
		}
		if (p.x - 1 >= 0 && map[p.x - 1][p.y] != 'X') {
			if (map[p.x - 1][p.y] == 'P') {
				ans++;
			}
			map[p.x - 1][p.y] = 'X';
			cal.push(aaa(p.x - 1, p.y));
		}
		if (p.y - 1 >= 0 && map[p.x][p.y - 1] != 'X') {
			if (map[p.x][p.y - 1] == 'P') {
				ans++;
			}
			map[p.x][p.y - 1] = 'X';
			cal.push(aaa(p.x, p.y - 1));
		}
		if (p.y + 1 < m && map[p.x][p.y + 1] != 'X') {
			if (map[p.x][p.y + 1] == 'P') {
				ans++;
			}
			map[p.x][p.y + 1] = 'X';
			cal.push(aaa(p.x, p.y + 1));
		}
	}
	if (ans == 0) {   //한명도 못찾았을 시 TT출력
		cout << "TT";
	}
	else {
		cout << ans;
	}
}