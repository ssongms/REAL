# 1182 부분수열의 합

import sys

input = sys.stdin.readline().rstrip().split() # 입력 정수 개수, 목표 수 입력
num = int(input[0]) # 입력된 정수의 개수
target = int(input[1]) # 목표로 하는 합

numbersList = list(map(int, sys.stdin.readline().rstrip().split())) # 정수 입력
count = 0 # target이 되는 경우의 수
testArr = [] # 부분수열

def getSum(start):
  global count
  if sum(testArr) == target and len(testArr) > 0: # 부분수열의 합이 target을 충족시켰을 때
    count += 1

  for i in range(start, num): # 호출된 지점부터 끝까지 정수들을 입력하고 비교하고 제거하며 target을 만족하는 부분수열을 체크
    testArr.append(numbersList[i])
    getSum(i+1)
    testArr.pop()

getSum(0)
print(count)