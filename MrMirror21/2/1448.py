# 1448 삼각형 만들기
# sort() 사용, 평균 700ms대

import sys

num = int(sys.stdin.readline()) # 빨대 개수 입력

straws = sorted(list(map(int, [sys.stdin.readline() for _ in range(num)])), reverse=True) # 정수 리스트로 변환 후 내림차순 정렬

def checkTriangle(strawList):
  if len(strawList) < 3: return -1 # 재귀 호출 진행중 빨대가 3개 미만일 경우 삼각형 생성 불가능

  if (strawList[0] >= strawList[1] + strawList[2]) : return checkTriangle(strawList[1:]) # 가장 긴 빨대 3개로 삼각형을 만들지 못할 경우, 가장 긴 빨대를 재외하고 재귀 호출
  else: return strawList[0]+strawList[1]+strawList[2] # 삼각형 생성 가능, 삼각형 각 변 길이 합 반환

print(checkTriangle(straws)) # 결과 출력