import sys
#input()으로 받으면 시간초과
N = int(sys.stdin.readline())
straws = [int(sys.stdin.readline()) for _ in range(N)]
  
straws.sort(reverse = True) #내림차순 정렬
max = -1                    #최댓값 출력, 삼각형을 만들 수 없으면 -1 출력

for i in range(N - 2):
  long = straws[i]  #내림차순 정렬->뒤의 두개보다 같거나 긺
  others = straws[i + 1] + straws[i + 2] #뒤의 두 빨대의 길이의 합
  if long < others and (long + others) > max:
    #삼각형 조건:가장 긴 변>나머지 두 변의 합
    #삼각형 조건을 만족하고 max보다 크면 max 업데이트
    max = long + others

print(max)

'''
놓친 부분;
  내림차순으로 정렬한 것이므로
  최초로 찾은 삼각형이 가장 큰 삼각형
  max가 필요 없음, 삼각형이면 바로 출력하면 됨
'''