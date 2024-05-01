people = 0

def move(campus, n, m, startX, startY):
  global people
  visited = [[0 for _ in range(m)] for _ in range(n)]
  nextVisit = [(startX, startY)]
  while nextVisit:
    (x, y) = nextVisit.pop()
    if x in range(n) and y in range(m) and not visited[x][y]:
      visited[x][y] = 1
      if campus[x][y] != 'X':
        if campus[x][y] == 'P':
          people += 1
        nextVisit.append((x + 1, y))
        nextVisit.append((x, y + 1))
        nextVisit.append((x - 1, y))
        nextVisit.append((x, y - 1))

n, m = map(int, input().split())
campus = []

for i in range(n):
  campus.append(list(input()))
  if 'I' in campus[i]:
    startX = i
    startY = campus[i].index('I')

move(campus, n, m, startX, startY)
if people > 0:
  print(people)
else:
  print('TT')