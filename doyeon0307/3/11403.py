'''
graph[i][j]=0이면 i->j 직접 가는 경로 없음
노드를 거치는 경로가 있는지 확인해야 함 (i->k->j)
이때 새로 찾은 경로를 계속 활용해야 함
예: graph[i][j]=0, graph[j][m]=1
    k를 거치는 경로 찾음(i->k->j)
    이를 활용하지 않으면 i->m 경로가 없다고 판단하게 됨
floyd 알고리즘 응용=>k를 가장 바깥 루프로 둠
'''

def findPath (graph, n):
  for k in range(n): #k번 노드를 거쳐 갈 수 있는지 확인
    for i in range(n):
      for j in range(n):
        if graph[i][k] and graph[k][j]: #i->k이고 k->j이면 i->k->j
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