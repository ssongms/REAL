# 2606 바이러스

import sys

nodes = int(sys.stdin.readline()) # 컴퓨터 개수
connections = int(sys.stdin.readline()) # 연결 되어있는 컴퓨터 쌍의 수
connectionList = [[]*(nodes + 1) for _ in range(nodes + 1)] # 그래프 표시 위한 2차원 배열
visited = [0]*(nodes + 1) # 방문한 컴퓨터를 표시하기 위한 1차원 배열

for i in range(connections): # 컴퓨터 간 연결 관계를 입력 받아 connectionList에 입력
    a, b = map(int, input().split())
    connectionList[a].append(b)
    connectionList[b].append(a)

def DFS(infected):
    count = 0
    visited[infected] = 1 # 감염된 현재 컴퓨터를 방문 표시
    queue = [infected] # 방문해야 할 컴퓨터 번호를 저장할 큐
    while queue:
        for i in connectionList[queue.pop()]: # 현재 큐에서 꺼낸 컴퓨터와 연결된 모든 컴퓨터 번호 리스트로 반환
            if (visited[i] == 0): # 방문하지 않았다면
                visited[i] = 1 # 방문 표시
                queue.insert(0, i) # 방문하지 않은 컴퓨터를 큐의 맨 앞에 추가
                count += 1 # 감염된 컴퓨터 개수 증가
    return count

print(DFS(1)) # 1번 컴퓨터를 감염시킨 후 결과 출력