import sys

dp = [[[0]*21 for _ in range(21)] for _ in range(21)]
# a, b, c 범위는 -50~50 이지만, 어차피 음수이거나, 20 이상인 수에 대해 조건문에 필터링되어 리턴값이 있음 -> 즉, dp 배열에 저장하지 않으므로 21개만 저장하면 충분함

def w(a, b, c): 
    if a <= 0 or b <= 0 or c <= 0: 
        return 1 
    if a > 20 or b > 20 or c > 20:
        return w(20, 20, 20)
    if a < b < c: 
        if dp[a][b][c] == 0:
            dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
        return dp[a][b][c]
    else:
        if dp[a][b][c] == 0:
            dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
        return dp[a][b][c]

while True:
    a, b, c = map(int, sys.stdin.readline().split())
    if a == b == c == -1:
        break
    
    print('w({}, {}, {}) = {}'.format(a, b, c, w(a, b, c)))