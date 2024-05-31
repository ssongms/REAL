# 하노이 탑 이동 순서 https://www.acmicpc.net/problem/11729

# 원판 n개를 s에서 e로 옮기는 방법
# 1. n-1개를 s에서 x로
# 2. 맨 밑의 원판 1개를 s에서 e로
# 3. n-1개를 x에서 e로

# 이동횟수는 "2**n-1"으로 구하고
# answer에 append하는 대신 바로 print해도 됨
# 증명 : t(n) = 2t(n-1) + 1

N = int(input())
answer = []

def recur (n, s, e):
  if n == 1:
    answer.append(str(s) + ' ' + str(e))
  else:
    x = 6 - s - e
    recur (n - 1, s, x)
    recur (1, s, e)
    recur (n - 1, x, e)

recur (N, 1, 3)
print (len(answer))
for a in answer:
  print (a)