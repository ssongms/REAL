import sys

passwordNum = int(sys.stdin.readline()) # 번호 목록 개수 입력

words = "" # 번호 목록을 저장할 string 변수

passwordArray = [] # 번호의 reversed 버전을 저장할 list 선언

for i in range(passwordNum):
  currentNum = sys.stdin.readline().rstrip() # 번호 입력
  passwordArray.append(currentNum[::-1]) # 입력받은 번호를 뒤집어 list에 저장
  words = words+(currentNum)+"," # 번호들을 ,로 구분해 하나의 string으로 합성

for i in range(passwordNum):
  if(passwordArray[i] in words): # in 키워드 사용, words 변수에 뒤집어 저장한 번호가 있는지 확인
    print("{} {}".format(len(passwordArray[i]), passwordArray[i][len(passwordArray[i]) // 2])) # 존재한다면 결과 출력, 반복문 종료
    break