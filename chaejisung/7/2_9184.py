# 9184
import sys

# 재귀적 버전의 해답 - 시간 초과
# sys.setrecursionlimit(10000000)
# def solution(a, b, c):
#     if(a <= 0 or b <= 0 or c <= 0):
#         return 1
#     elif(a > 20 or b > 20 or c > 20):
#         return solution(20, 20, 20)
#     elif(a<b and b<c):
#         return solution(a, b, c-1)+solution(a, b-1, c-1)-solution(a, b-1, c)
#     else:
#         return solution(a-1, b, c)+solution(a-1, b-1, c)+solution(a-1, b, c-1)-solution(a-1, b-1, c-1)

def solution(dp:list, a, b, c):
    if a <= 0 or b<= 0 or c<=0:
        return 1
    if a > 20 or b > 20 or c > 20:
        return solution(dp, 20, 20, 20)
    if dp[a][b][c]:
        return dp[a][b][c]
    if a<b<c:
        dp[a][b][c] = solution(dp, a,b,c-1)+solution(dp, a,b-1,c-1)-solution(dp, a, b-1, c)
        return dp[a][b][c]
    dp[a][b][c] = solution(dp, a-1, b, c)+solution(dp, a-1,b-1,c)+solution(dp, a-1,b,c-1)-solution(dp, a-1,b-1,c-1)

    return dp[a][b][c]

dp = [[[0]*(21) for _ in range(21)] for _ in range(21)]

while True:
    a,b,c = map(int, sys.stdin.readline().split(" "))
    if a==-1 and b==-1 and c==-1:
        break
    print(f'w({a}, {b}, {c}) = {solution(dp, a,b,c)}')