import sys

straw = int(sys.stdin.readline()) # 반복횟수 입력
isFound = False # 삼각형을 만족하는 해답이 있는지 체크하는 플래그
strawLengthList = []

for _ in range(straw):
    strawLengthList.append(int(sys.stdin.readline())) # 길이를 입력
strawLengthList.sort(reverse=True) # 내림차순 정렬

for i in range(len(strawLengthList)-2):
    if strawLengthList[i] < strawLengthList[i+1] + strawLengthList[i+2]: # 삼각형 만족 조건
        isFound = True # 플래그 변경
        print(strawLengthList[i] + strawLengthList[i+1] + strawLengthList[i+2])
        break # 반복문 탈출
    
if not isFound:
    print(-1)