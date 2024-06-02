'''
graph[i][j]=0�̸� i->j ���� ���� ��� ����
��带 ��ġ�� ��ΰ� �ִ��� Ȯ���ؾ� �� (i->k->j)
�̶� ���� ã�� ��θ� ��� Ȱ���ؾ� ��
��: graph[i][j]=0, graph[j][m]=1
    k�� ��ġ�� ��� ã��(i->k->j)
    �̸� Ȱ������ ������ i->m ��ΰ� ���ٰ� �Ǵ��ϰ� ��
floyd �˰��� ����=>k�� ���� �ٱ� ������ ��
'''

def findPath (graph, n):
  for k in range(n): #k�� ��带 ���� �� �� �ִ��� Ȯ��
    for i in range(n):
      for j in range(n):
        if graph[i][k] and graph[k][j]: #i->k�̰� k->j�̸� i->k->j
          graph[i][j] = 1

n = int(input())
graph = []
for i in range(n):
  graph.append(list(map(int, input().split())))

findPath(graph, n)
for rows in graph:
  for e in rows:
    print(e, end = ' ')
  print()