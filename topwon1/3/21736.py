import sys
n, m = map(int,sys.stdin.readline().split())

graph = [list(map(str, sys.stdin.readline().strip())) for _ in range(n)]
for i in range(n): # 초기 도연이의 위치 좌표 설정.
    for j in range(m):
        if graph[i][j] == 'I':
            x = i
            y = j
            break
        
def dfs(x,y):
    global cnt
    if x<0 or y<0 or x>n-1 or y>m-1: # 캠퍼스를 벗어나면 dfs탐색을 종료.
        return 0
    if graph[x][y] == 'I' or graph[x][y] == 'O' or graph[x][y] == 'P': # x(벽) 인 경우에는 도연이의 이동 없음.
        if graph[x][y] == 'P': # 도연이가 캠퍼스 내에서 사람을 만난 경우.
            cnt +=1
        graph[x][y] = 1 # 중복 방지를 위해 다녀간 칸은 1로 변경.
        dfs(x+1,y)
        dfs(x,y+1)
        dfs(x-1,y)
        dfs(x,y-1)
        
cnt = 0        
dfs(x,y)

if cnt == 0: # 아무도 만나지 못한 경우엔 cnt를 TT로.
    cnt = 'TT'
print(cnt)