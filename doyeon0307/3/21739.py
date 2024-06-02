people = 0 #��������

def move(campus, n, m, startX, startY): #BFS
  global people
  visited = [[0 for _ in range(m)] for _ in range(n)] #�湮�� ��ǥ->1
  nextVisit = [(startX, startY)] #�湮�� ������ ��ǥ�� �����ϴ� ť
  while nextVisit:
    (x, y) = nextVisit.pop() #�̹��� �湮�� ��ǥ
    if x in range(n) and y in range(m) and not visited[x][y]: #��ǥ�� �׷��� �ȿ� �ְ� �湮�� ���� ���� ��
      visited[x][y] = 1 #�湮������ ǥ��
      if campus[x][y] != 'X': #X�� ���̻� �������� ����
        if campus[x][y] == 'P': #P�� ������ ���� ��� +1
          people += 1
        nextVisit.append((x + 1, y)) #������ ��� �������� ������
        nextVisit.append((x, y + 1))
        nextVisit.append((x - 1, y))
        nextVisit.append((x, y - 1))

n, m = map(int, input().split())
campus = []

for i in range(n):
  campus.append(list(input()))
  if 'I' in campus[i]: #���� ��ǥ ����
    startX = i
    startY = campus[i].index('I')

move(campus, n, m, startX, startY)
if people > 0:
  print(people)
else:
  print('TT')