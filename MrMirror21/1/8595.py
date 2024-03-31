import sys

len = int(sys.stdin.readline()) # 문자열 길이 입력
input = sys.stdin.readline().rstrip() # 문자열 입력

sum = 0 # 매직 넘버 총합
start = -1 # 매직 넘버 시작 인덱스를 표시하기 위한 변수, 초기값 -1

for i in range(len):
  if input[i].isdigit(): #isdigit() 사용, 숫자인 동시에 start가 따로 할당되지 않았다면 현재 인덱스를 start에 할당
    if start == -1:
      start = i
  if input[i].isdigit() == False: # start가 할당되었는데 현재 위치가 문자라면 매직넘버를 다 읽었다는 뜻
    if start != -1:
      sum += int(input[start:i]) # 지금까지 읽은 매직 넘버를 sum에 합산
      start = -1 # start 초기화

if start != -1: # 단어가 숫자로 끝날 경우
  sum += int(input[start:])

print(sum)