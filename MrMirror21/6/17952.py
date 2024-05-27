# 17952 과제는 끝나지 않아!

import sys

semester = int(sys.stdin.readline()) # 카드 개수
stack = []
point = 0

for min in range(semester):
  input = list(map(int,sys.stdin.readline().split()))
  if input[0] == 1:
    if input[2] == 1:
      point += input[1]
    else:
      stack.append([input[1], input[2]-1])
  else:
    if stack:
      stack[-1][1] -= 1
      if stack[-1][1] == 0:
        x = stack.pop()
        point += x[0]

print(point)

