# 10828 스택

N = int(input()) # 명령의 수
stack = []
for _ in range(N):
    command = list(map(str, input().split()))
    if command[0] == "push":
        stack.append(int(command[1]))
    elif command[0] == "pop":
        if len(stack) == 0: print(-1)
        else:               print(stack.pop())
    elif command[0] == "size":
        print(len(stack))
    elif command[0] == "empty":
        if len(stack) == 0: print(1)
        else:               print(0)
    elif command[0] == "top":
        if len(stack) == 0: print(-1)
        else:               print(stack[-1])