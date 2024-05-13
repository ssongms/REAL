import sys
N = int(sys.stdin.readline()) # 돌 개수

numbersInput = list(map(int, sys.stdin.readline().rstrip().split())) # 입력 숫자 정수 리스트화

for i in range(1, N):
  numbersInput[i] = max(numbersInput[i-1] + numbersInput[i], numbersInput[i])

print(max(numbersInput))