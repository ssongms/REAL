import sys

n = int(sys.stdin.readline()) # 반복 횟수 입력
passwordsList = [(input()) for _ in range(n)] # 반복 횟수만큼 입력하여 배열로 저장
resultLength = 0 # 출력할 비밀번호의 길이
resultMidChar = '' # 출력할 비밀번호의 중간 character
isRepeat = True; # 반복을 더 수행할지를 위한 플래그

for password in passwordsList:
    if isRepeat : # 플래그가 True인 경우에만 반복문 수행
        stack = [] # 스택 정의
        queue = [] # 큐 정의
        for idx in range(len(password)):
            stack.append(password[idx]) # 각 password에서 한글자씩 stack에 push 
        for i in range(len(password)):
            queue.append(stack.pop()) # stack으로부터 pop(가장 위 요소부터 빼냄)해서 queue에 저장
            
        reversePassword = ''.join(queue) # 리스트를 문자열로 변환. 예를 들어 ['a','b','c'] => 'abc'
        # 이 상태에서 reversePassword는 각 password의 역순 (abc -> cba)

        for comparePassword in passwordsList: 
            if(comparePassword == reversePassword): # password가 뒤집은 비밀번호와 같은지 검사
                resultLength = len(reversePassword)
                resultMidChar = reversePassword[resultLength//2] # 부동소수점 방지를 위해 '//' 연산자를 사용
                isRepeat = False # 더이상 반복문을 수행하지 않기 위함
                break

print(resultLength, resultMidChar)