import sys
stack_l = list(sys.stdin.readline().rstrip())
stack_r = []

for i in range(int(sys.stdin.readline())):
    command = list(sys.stdin.readline().split())
    # L 명령에는 커서 뒤의 문자를 stack_r에 저장
    if command[0] == "L":
        if len(stack_l) == 0:
            continue
        stack_r.append(stack_l.pop())
    # D 명령에는 커서 뒤의 문자를 stack_l에 저장
    elif command[0] == "D":
        if len(stack_r) == 0:
            continue
        stack_l.append(stack_r.pop())
    # B 명령에는 좌측 문자를 하나 삭제
    elif command[0] == "B":
        if len(stack_l) == 0:
            continue
        stack_l.pop()
    # P 명령에는 stack_l의 끝에 문자 추가
    elif command[0] == "P":
        stack_l.append(command[1])

for i in stack_l:
    print(i,end="")

for i in reversed(stack_r):
    print(i,end="")