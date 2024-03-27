import sys # 입출력을 빠르게 하기 위한 모듈
import re # 정규표현식 모듈

n = int(sys.stdin.readline()) # 문자열 길이 입력
str = sys.stdin.readline().rstrip() # 문자열 입력

reg = re.compile("[0-9]+") # 정규표현식 : 숫자 0부터 9까지 
numList = reg.findall(str) # 입력받은 문자열과 정의한 정규표현식이 매칭되는 것을 모두 찾아서 numList에 저장
result = 0

for i in numList:
    result += int(i) # 문자열 -> 정수로 변환하여 result에 저장

print(result)
