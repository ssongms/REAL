# 2839 설탕 배달
import sys
sugars = int(sys.stdin.readline()) # 돌 개수
bags3 = 0

while (sugars > 0 and sugars % 5 != 0):
  sugars -= 3
  bags3 += 1

bags5 = sugars // 5

if (sugars < 0):
  print(-1)
else:
  print (bags5 + bags3)
