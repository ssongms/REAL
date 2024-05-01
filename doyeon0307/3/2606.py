def findVirus(graph, computers, virus):
  queue = [1] #1번 컴퓨터부터 검사
  while queue: #큐가 비어있지 않는 동안=>검사할 컴퓨터가 남음
    computer = queue.pop() #검사할 컴퓨터
    for k in range(1, computers + 1):
      if graph[computer][k] == 1 and not virus[k]: #대상 컴퓨터와 연결 & 아직 검사하지 않은 컴퓨터 k
        queue.append(k) #큐에 넣음 -> 다음에 검사
        virus[k] = 1 #k번 컴퓨터가 바이러스에 걸림을 표시

computers = int(input()) #컴퓨터 개수
edges = int(input()) #이음선 개수
graph = [[0 for _ in range(computers+1)] for _ in range(computers+1)] #컴퓨터 그래프
virus = [0 for _ in range(computers+1)] #바이러스에 걸린 컴퓨터->1

for i in range(edges):
  a, b = map(int, input().split())
  graph[a][b] = 1 #컴퓨터 a와 b가 연결->1
  graph[b][a] = 1 #컴퓨터 b와 a도 연결->1

findVirus(graph, computers, virus)

countVirus = virus.count(1) #virus에 걸린 컴퓨터 개수
if countVirus > 0:
  print(countVirus - 1)
else:
  print (0)