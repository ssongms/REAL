dx = [0,0,1,-1]
dy = [1,-1,0,0]
camp = []
init_x, init_y = 0, 0
result = 0

# 입력
N, M = map(int, input().split()) 

for i in range(N):
    camp.append(list(input()))
    for j in range(M):
        if camp[i][j] == 'I': 
            init_x, init_y = i, j
      
visited = [[0] * M for i in range(N)]      
    
deq = []
deq.append[init_x, init_y]

while deq:
    x, y = deq.pop(0)
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        if 0 <= nx < N and 0 <= ny < M and visited[nx][ny] == 0: # 방문 안했으면 
            visited[nx][ny] = 1 
            if camp[nx][ny] == 'O':   
                deq.append([nx, ny])
            elif camp[nx][ny] == 'P':
                deq.append([nx, ny])
                result += 1 # 
      
if(result == 0):
    print('TT')
else:
    print(result)          