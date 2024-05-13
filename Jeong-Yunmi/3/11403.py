#bfs
from collections import deque

def bfs(start):
    queue = deque()
    queue.append(start)
    while queue:
        a = queue.popleft()
        for i in range(n):
            if not visited[start][i] and board[a][i]:
                queue.append(i)
                visited[start][i] = 1

n = int(input())

board = [list(map(int,input().split())) for _ in range(n)]

visited = [[0] * n for _ in range(n)]
for i in range(n):
    bfs(i)

for i in visited:
    print(*i)


#DFS
#다차원배열 visited을 넘겨서 확인
#std행을 fix시켜놓고 처리를 해야하기 때문에 std 인자를 넣어줬다

def dfs(std, start):
    for i in range(n):
        if visited[std][i] == 0 and board[start][i]:
            visited[std][i] = 1
            dfs(std, i)

n = int(input())

board = [list(map(int,input().split())) for _ in range(n)]
visited = [[0] * n for _ in range(n)]

for i in range(n):
    dfs(i,i)

for i in visited:
    print(*i)

#DFS
#일차원배열 visited을 넘겨서 확인

def dfs(start):
    for i in range(n):
        if visited[i] == 0 and board[start][i]:
            visited[i] = 1
            dfs(i)

n = int(input())

board = [list(map(int,input().split())) for _ in range(n)]

visited = [0] * n
for i in range(n):
    dfs(i)
    print(*visited) #한 행씩 처리 하기
    visited = [0] * n