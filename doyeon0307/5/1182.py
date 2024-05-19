n, s = map(int, input().split())
integers = list(map(int, input().split()))
cnt = 0

# i : curSum에 마지막으로 더한 원소
def makeS(curSum, i):
  global cnt
  if curSum == s:
    cnt += 1
  if i < n - 1:
    for j in range(i+1, n):
      makeS(curSum + integers[j], j)

for start in range(n):
  makeS(integers[start], start)

print(cnt)