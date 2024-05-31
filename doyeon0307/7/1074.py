# 1. Z https://www.acmicpc.net/problem/1074

# 00 01  0 1
# 10 11  2 3
# 이걸 하나의 z라 보고 모든 좌표를 {00 01 10 11}으로 좁힐 거임

n, r, c = map(int, input().split())

# s = size, z = z의 첫번째 값, (i, j) = z의 첫번째 좌표
def recur (s, z, i, j):
  if s == 1:
    z = z + 2 if r > i else z # 밑으로 커지면 +2
    z = z + 1 if c > j else z # 옆으로 커지면 +1
    print(z)
    return
  si = (r - i) // s
  sj = (c - j) // s

  recur (s // 2, z + (2 * si + sj) * (s ** 2), i + si * s, j + sj * s)

recur(2 ** (n - 1), 0, 0, 0)