#include <iostream>
#include <queue>
using namespace std;
char map[600][600];  //�� �����
int ans = 0;
class aaa {   // x��ǥ�� y��ǥ�� �ѹ���ó���� Ŭ���� aaa����
public:
	int x, y;
	aaa(int a, int b) {
		x = a;
		y = b;
	}
};
int main() {
	int n, m;
	int x1, y1;   //������ġ Ȯ���� ����
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {  //�ʱ׸��� I�� �Է¹������ ������ġ ����.
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
	while (cal.empty() != 1) {    //BFS �����¿� Ȯ���ϸ鼭 P�߰��ϸ� �߰��ڼ�����++ �ѹ������� ���̻��ʿ�����Ƿ� �ߺ�ó��
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
	if (ans == 0) {   //�Ѹ� ��ã���� �� TT���
		cout << "TT";
	}
	else {
		cout << ans;
	}
}