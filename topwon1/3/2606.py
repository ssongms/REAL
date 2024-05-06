# 바이러스
import sys
input = sys.stdin.readline

V = int(input())
E = int(input())

graph = [[] for _ in range(V+1)]

# 서로 연결된 컴퓨터의 번호를 리스트에 담는다.
for i in range(E):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)

visit = [0 for _ in range(V+1)]
def dfs(start):
  visit[start] = 1 # 감염된 컴퓨터 번호의 인덱스를 1로 처리하여 감염을 표시.
  for i in graph[start]:
    if visit[i] == 0:
      dfs(i)
dfs(1)
print(sum(visit)-1)