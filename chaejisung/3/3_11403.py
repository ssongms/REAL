n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]
visited = [[0]*n for i in range(n)]

def bfs(x):
    queue =[]
    queue.append(x)
    check = [0 for i in range(n)]

    while queue:
        q = queue.pop(0)

        for i in range(n):
            if check[i] == 0 and graph[q][i] == 1:
                queue.append(i)
                check[i] = 1
                visited[x][i] = 1

for i in range(0, n):
    bfs(i)

for i in visited:
    print(*i)
