#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>map[101];  //간선 정보 저장할 벡터
int check[101];   //BFS 돌릴때 갔던곳 중복체크
int answer = 0;   //답체킹
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {  //간선 저장
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	for (int i = 1; i < n + 1; i++) {   //중복체크배열 초기화
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