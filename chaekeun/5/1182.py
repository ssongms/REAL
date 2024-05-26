from sys import stdin
input = stdin.readline

n, s = map(int, input().split())
a = list(map(int, input().split()))
ans = 0


# 모든 부분집합에서 그 합이 s인지 판별해보는 풀이
def solve(idx, sums):
    global ans
    if idx >= n:
        if sums == s: #이거만 할 경우 부분수열이 존재하지 않을때를 처리하지 못하는듯
            ans += 1
        return
    solve(idx+1, sums+a[idx]) #idx를 전달해준다는 점에서 n과 m문제랑 비슷한듯... idx를 인자로 전달해서 중복을 피해주는 것 기억하자. 
    solve(idx+1, sums)

solve(0, 0)
print(ans if s else ans-1)

# 또다른 백트래킹 풀이

from sys import stdin
input = stdin.readline

n, s = map(int, input().split())
a = list(map(int, input().split()))
cnt = 0
ans = [] #스택에 쌓는 이유가 멀까

def solve(start): # start부터 시작하여 부분집합 생성
    global cnt 
    if sum(ans) == s and len(ans) > 0:
        cnt += 1

    for i in range(start, n): # 루프를 통해 start부터 배열의 끝까지 탐색할거임
        ans.append(num[i]) # 현재 원소를 부분집합에 추가
        solve(i+1) # 다음 인덱스부터 부분집합 생성 -> depth 깊어지면서 끝까지 갈것
        ans.pop() # 현재 원소를 부분집합에서 제거하고 다른 경로 탐색

solve(0)
print(cnt)