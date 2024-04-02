# 1448 삼각형 만들기
# sort() 없이 max(), pop()으로만 구현, 평균 400ms대

import sys

num = int(sys.stdin.readline()) # 빨대 개수 입력

straws = list(map(int, [sys.stdin.readline() for _ in range(num)])) # 빨대 길이 입력 받아 정수 리스트화

def checkTriangle(strawList):
  if len(strawList) < 3: # 재귀 호출 중 빨대 개수가 3개 미만이면 삼각형 생성 불가
    return -1

  longest = max(strawList) # max() 이용, 가장 긴 빨대 탐색
  strawList.pop(strawList.index(longest)) # 두 번쨰, 세 번쨰 긴 빨대 탐색 위해 pop() 사용
  nextStrawList = strawList[:] # 재귀 호출 위한 빨대 리스트 shallow copy
  second = max(strawList) # 빨대 탐색 과정 반복
  strawList.pop(strawList.index(second))
  third = max(strawList)

  if (longest >= second + third) : return checkTriangle(nextStrawList) # 삼각형 생성 불가능 판정 시, 가장 긴 빨대 제외한 리스트로 재도전
  else: return longest+second+third # 삼각형 생성 가능 시, 삼각형 변 길이의 합 반환

print(checkTriangle(straws)) # 결과 출력