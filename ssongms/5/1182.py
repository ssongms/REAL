# Not using Backtracking
"""
import sys
from itertools import combinations

input = sys.stdin.readline

N, S = map(int, input().split())
arr = list(map(int, input().split()))
cnt = 0

for i in range(1, N+1):
    caseTup = combinations(arr, i) # itertools의 조합(combinations) 함수 이용
    for case in caseTup:
        if sum(case) == S:
            cnt += 1
print(cnt)

# -> 통과
"""

# Using Backtracking
import sys
input = sys.stdin.readline
N, Sum = map(int, input().split())
seq = list(map(int, input().split()))

branch = []
result = 0
visited = [False] * N

def partSeqSum(idx): # 통과 (약 800ms)
    global result

    if len(branch) >= 1 and sum(branch) == Sum:
        result += 1
    
    if len(branch) == N:
        return

    for i in range(idx, len(seq)):
        if not visited[i]:
            branch.append(seq[i])
            visited[i] = True
            partSeqSum(i+1)
            branch.pop()
            visited[i] = False


def partSeqSum2(idx, partSum): # 실행 속도를 대폭 향상시킨 백트래킹 재귀함수 (약 200ms)
    global result

    if idx == N: # 재귀 탈출 조건 -> N번째 인덱스는 검사할 수 없음(크기가 N이므로 N-1까지 가능) 
        return
    
    partSum += seq[idx] # 현재를 더해봄
    if partSum == Sum: # 더해봤더니 타겟 Sum과 같으면 결과값 1 증가
        result += 1
    
    partSeqSum2(idx+1, partSum) # 현재를 더한 경우의 수
    partSeqSum2(idx+1, partSum-seq[idx]) # 현재를 더하지 않은 경우를 재귀로 돌리기 위해 더했던 값을 다시 뺌

# partSeqSum(0)
partSeqSum2(0,0)
print(result)