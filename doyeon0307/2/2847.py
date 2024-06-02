'''
쉬운 레벨의 점수 < 어려운 레벨의 점수
-> 마지막 레벨의 점수가 최대 점수

점수를 내리는 것을 최소한으로 할 것
-> 앞 레벨의 점수 = 뒷 레벨의 점수 - 1
'''

import sys
#sys.stdin.readline()->빠른 입력
#[]안에 입력함수 & for문->n번 입력받아 바로 리스트 저장
N = int(sys.stdin.readline())
level = [int(sys.stdin.readline()) for _ in range(N)]

cnt = 0 #점수를 내린 횟수
for i in range(N - 1, 0, -1):
  if level[i] <= level[i - 1]:
    level[i - 1] = level[i] - 1
    cnt += level[i - 1] - level[i] + 1

print(cnt)