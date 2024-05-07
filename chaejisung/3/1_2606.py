v = int(input())
e = int(input())
graph = [[] for i in range(v+1)]

# 연결 부분 쪼개기
for i in range(e):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# 깊이우선탐색
def dfs(x):
    global count
    visited[x] = True
    count += 1
    for node in graph[x]:
        if visited[node]:
            continue
        dfs(node)

count = 0
visited = [False for i in range(v+1)]
dfs(1)
print(count-1)