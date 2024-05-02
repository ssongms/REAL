#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>map[101];  //���� ���� ������ ����
int check[101];   //BFS ������ ������ �ߺ�üũ
int answer = 0;   //��üŷ
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {  //���� ����
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	for (int i = 1; i < n + 1; i++) {   //�ߺ�üũ�迭 �ʱ�ȭ
		check[i] = 0;
	}
	queue<int>x;
	x.push(1);
	check[1] = 1;
	while (x.empty() != 1) {   //BFS
		int p = x.front(); x.pop();
		for (int i = 0; i < map[p].size(); i++) {
			if (check[map[p][i]] == 0) {
				check[map[p][i]] = 1;
				answer++;
				x.push(map[p][i]);
			}
		}
	}
	cout << answer;
}