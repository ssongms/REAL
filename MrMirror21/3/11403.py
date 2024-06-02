#11403 경로 찾기

import sys

N = int(sys.stdin.readline()) # 정점의 개수 입력
graph = [list(map(int, sys.stdin.readline().split())) for _ in range(N)] # 그래프 입력

# 인접행렬 작성
for k in range(N):
    for i in range(N):
        for j in range(N):
            if graph[i][k] and graph[k][j]: # i와 j의 양방향 간선 경로가 존재할 경우
                graph[i][j] = 1

# 결과 출력
for i in range(N):
    for j in range(N):
        print(graph[i][j], end=" ")
    print()