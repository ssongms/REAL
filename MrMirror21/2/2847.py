# 2847 게임을 만든 동준이
import sys

len = int(sys.stdin.readline()) # 문자열 길이 입력

stageList = list(map(int, [sys.stdin.readline() for i in range(len)]))[::-1] # 스테이지들을 입력 받아 정수 리스트화, 순서 반대로 정렬
decreaseNum = 0 # 점수 감소 횟수

for i in range(len-1):
  if (stageList[i] <= stageList[i+1]): # 나중 스테이지보다 점수가 같거나 높을 경우
    decreaseNum += (stageList[i+1] - stageList[i] + 1) # 총 점수 감소량 증가
    stageList[i+1] -= (stageList[i+1] - stageList[i] + 1) # 해당 스테이지 점수 감소

print(decreaseNum) # 결과 출력