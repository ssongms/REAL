# 9655 돌 게임
import sys
stones = int(sys.stdin.readline()) # 돌 개수

if (stones % 2) == 0:
  print('CY')
else:
  print("SK")
