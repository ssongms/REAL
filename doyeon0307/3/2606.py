def findVirus(graph, computers, virus):
  queue = [1] #1�� ��ǻ�ͺ��� �˻�
  while queue: #ť�� ������� �ʴ� ����=>�˻��� ��ǻ�Ͱ� ����
    computer = queue.pop() #�˻��� ��ǻ��
    for k in range(1, computers + 1):
      if graph[computer][k] == 1 and not virus[k]: #��� ��ǻ�Ϳ� ���� & ���� �˻����� ���� ��ǻ�� k
        queue.append(k) #ť�� ���� -> ������ �˻�
        virus[k] = 1 #k�� ��ǻ�Ͱ� ���̷����� �ɸ��� ǥ��

computers = int(input()) #��ǻ�� ����
edges = int(input()) #������ ����
graph = [[0 for _ in range(computers+1)] for _ in range(computers+1)] #��ǻ�� �׷���
virus = [0 for _ in range(computers+1)] #���̷����� �ɸ� ��ǻ��->1

for i in range(edges):
  a, b = map(int, input().split())
  graph[a][b] = 1 #��ǻ�� a�� b�� ����->1
  graph[b][a] = 1 #��ǻ�� b�� a�� ����->1

findVirus(graph, computers, virus)

countVirus = virus.count(1) #virus�� �ɸ� ��ǻ�� ����
if countVirus > 0:
  print(countVirus - 1)
else:
  print (0)