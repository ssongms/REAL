n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]

def dfs(x):
  for i in range(n):
    if graph[x][i] == 1 and visit[i] == 0: # x번째 줄 i 번째가 갈 수 있는 좌표인지 확인
        visit[i] = 1 # 방문했음을 기록
        dfs(i)

visit = [0 for _ in range(n)]
for i in range(n):
    dfs(i)
    for k in range(n):
        if visit[k] == 1: # 방문한 좌표는 1로 출력
            print(1, end=' ')
        else: # 그렇지 않으면 0으로 출력
            print(0, end=' ')
    print()
    visit = [0 for _ in range(n)]