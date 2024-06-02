import sys

#입력 부분
preArr = list(sys.stdin.readline().rstrip())
M = int(sys.stdin.readline())

# preArr은 cursor 앞
# nextArr은 cursor 뒤를 가리킴
nextArr = []

# cursor를 기준으로 preArr, nextArr에 값을 왔다갔다 함
for _ in range(M):
    editCommand = list(sys.stdin.readline().split())
    if(editCommand[0] == "L"):
        if(preArr):
            nextArr.append(preArr.pop())
    elif(editCommand[0] == "D"):
        if(nextArr):
            preArr.append(nextArr.pop())
    elif(editCommand[0] == "B"):
        if(preArr):
            preArr.pop()
    else:
            preArr.append(editCommand[1])
    #print(preArr, nextArr, cursor)
    
result = "".join(preArr)
result += "".join(reversed(nextArr))

print(result)