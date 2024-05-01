people = 0 #전역변수

def move(campus, n, m, startX, startY): #BFS
  global people
  visited = [[0 for _ in range(m)] for _ in range(n)] #방문한 좌표->1
  nextVisit = [(startX, startY)] #방문할 예정인 좌표를 저장하는 큐
  while nextVisit:
    (x, y) = nextVisit.pop() #이번에 방문할 좌표
    if x in range(n) and y in range(m) and not visited[x][y]: #좌표가 그래프 안에 있고 방문한 적이 없을 때
      visited[x][y] = 1 #방문했음을 표시
      if campus[x][y] != 'X': #X면 더이상 움직이지 않음
        if campus[x][y] == 'P': #P를 만나면 만난 사람 +1
          people += 1
        nextVisit.append((x + 1, y)) #가능한 모든 방향으로 움직임
        nextVisit.append((x, y + 1))
        nextVisit.append((x - 1, y))
        nextVisit.append((x, y - 1))

n, m = map(int, input().split())
campus = []

for i in range(n):
  campus.append(list(input()))
  if 'I' in campus[i]: #시작 좌표 구함
    startX = i
    startY = campus[i].index('I')

move(campus, n, m, startX, startY)
if people > 0:
  print(people)
else:
  print('TT')