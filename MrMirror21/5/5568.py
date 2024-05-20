# 5568 부분수열의 합

import sys
from itertools import permutations

N = int(sys.stdin.readline()) # 카드 개수
K = int(sys.stdin.readline()) # 선택할 카드 개수

cards = list(map(str, [sys.stdin.readline().rstrip() for _ in range(N)]))

pairs = list(permutations(cards, K))

numbers = []

for i in range(len(pairs)):
  numbers.append("".join(pairs[i]))

result = list(set(numbers))

print(len(result))
