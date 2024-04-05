# 1806 부분합
# 투 포인터 알고리즘 사용

import sys

input = sys.stdin.readline().rstrip().split() # 입력 숫자 개수, 목표 수 입력
num = int(input[0])
target = int(input[1])

numbersInput = list(map(int, sys.stdin.readline().rstrip().split())) # 입력 숫자 정수 리스트화
minCount = len(numbersInput) + 1 # 최소 길이 부분합, 초기값 설정
currentSum = 0 # 부분합
end = 0 # 투포인터 중 하나
count = 0 # 부분합 길이

for start in range(num): # 투 포인터 중 나머지 하나
  while currentSum < target and end < num: # 부분합이 목표 수치보다 낫고, end 포인터가 리스트 끝이 아닌 경우
    # 부분합 길이 증가, end 포인터 현재 위치의 부분합 추가, end 포인터 이동
    count += 1
    currentSum += numbersInput[end]
    end += 1
  if currentSum >= target and count < minCount: # 부분합 목표 수치 달성, 최소 길이일 경우 최소 길이 갱신
    minCount = count
  currentSum -= numbersInput[start] # start 포인터를 한 칸씩 이동시키며 부분합 줄이기
  count -= 1

# 결과 출력
if minCount == len(numbersInput)+1: print(0)
else: print(minCount)