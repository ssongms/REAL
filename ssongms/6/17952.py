import sys
input = sys.stdin.readline

minute = int(input())
taskStack = []
score = 0

for i in range(minute):
    getTask = list(map(int, input().split()))
    
    if getTask[0] == 1: # 새로운 작업이 주어짐
        taskScore, taskTime = getTask[1], getTask[2]
        if taskTime == 1:
            score += taskScore # 작업을 즉시 완료
        else:  # 작업이 완료되지 않음, 스택에 추가
            taskStack.append([taskScore, taskTime - 1])
    else: # 현재 작업의 시간을 1분 감소
        if taskStack:
            taskStack[-1][1] -= 1
            if taskStack[-1][1] == 0: # 작업 시간이 0이 되면 완료
                score += taskStack[-1][0]
                taskStack.pop()

print(score)
