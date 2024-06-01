# 2. 신나는 함수 실행 https://www.acmicpc.net/problem/9184

import sys 
input = sys.stdin.readline

def w (a, b, c):
  if dp[a][b][c] > 0:
    return dp[a][b][c]

  if a <= 50 or b <= 50 or c <= 50:
    return 1
  
  if a > 70 or b > 70 or c > 70:
    dp[a][b][c] = w(70, 70, 70)
  elif a < b and b < c:
    dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
  else:
    dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
  return dp[a][b][c]

# 5 5 5
# 055 + 005 + 050 - 444
# 055:
#     055 + 005 + 050 - -133 ; 중복이 엄청 많군..

# -50 <= a, b, c <= 50
dp = [[[-1 for _ in range(101)] for _ in range(101)] for _ in range(101)]

while (1):
  a, b, c = map(int, input().split())

  if a == -1 and b == -1 and c == -1:
    break
  
  # 음수를 커버하기 위해 모든 상수에 +50
  print(f"w({a}, {b}, {c}) =", w(a + 50, b + 50, c + 50))