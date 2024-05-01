def bfs(graph, computers, virus):
  queue = [1]
  while queue:
    computer = queue.pop()
    for k in range(1, computers+1):
      if graph[computer][k] == 1 and not virus[k]:
        queue.append(k)
        virus[k] = 1

computers = int(input())
edges = int(input())
graph = [[0 for _ in range(computers+1)] for _ in range(computers+1)]
virus = [0 for _ in range(computers+1)]

for i in range(edges):
  a, b = map(int, input().split())
  graph[a][b] = 1
  graph[b][a] = 1

bfs(graph, computers, virus)

countVirus = virus.count(1)
if countVirus > 0:
  print(countVirus - 1)
else:
  print (0)