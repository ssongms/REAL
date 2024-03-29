import sys

n = int(sys.stdin.readline()) # 반복 횟수 입력
passwordsList = [(input()) for _ in range(n)] # 반복 횟수만큼 입력하여 배열로 저장
resultLength = 0 # 출력할 비밀번호의 길이
resultMidChar = '' # 출력할 비밀번호의 중간 character
isRepeat = True; # 반복을 더 수행할지를 위한 플래그

for password in passwordsList:
    if isRepeat : # 플래그가 True인 경우에만 반복문 수행
        reversePassword = password[::-1] # 문자열을 뒤집어 reversePassword에 저장
        
        for comparePassword in passwordsList: 
            if(comparePassword == reversePassword): # password가 뒤집은 비밀번호와 같은지 검사
                resultLength = len(reversePassword)
                resultMidChar = reversePassword[resultLength//2] # 부동소수점 방지를 위해 '//' 연산자를 사용
                isRepeat = False # 더이상 반복문을 수행하지 않기 위함
                break

print(resultLength, resultMidChar)