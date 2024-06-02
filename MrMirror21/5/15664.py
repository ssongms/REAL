# 15664 N과 M

import sys
from itertools import combinations

N, M = map(int, input().split())

numbersList = sorted(list(map(int, sys.stdin.readline().rstrip().split())), reverse=False) # 정수 입력

pairs = sorted(list(set(list(combinations(numbersList, M)))), reverse=False)


for i in range(len(pairs)):
  row = ""
  for j in range(M):
    print(f"{pairs[i][j]}")
    row.join(f"{pairs[i][j]} ")
  print(row)