from sys import stdin
input = stdin.readline

n = int(input().strip())
stck = []
ans = 0

def work(task):
    global ans, stck
    task[2] -= 1
    if task[2] != 0:
        stck.append(task)
    else:
        ans += task[1]

for i in range(n):
    cmd = list(map(int, input().split()))
    if cmd[0] == 0:
        if len(stck) > 0:
            # 여기서 len을 쓰지 않고 그냥 if stck 이라고 해도된다...
            temp = stck.pop()
            work(temp)
    else:
        work(cmd)

print(ans)

# 블로그에서 본 비슷하지만 더 깔끔한 코드

for _ in range(n):
    new_task = list(map(int, input().split()))
    if new_task[0] == 1:
        task.append((new_task[1], new_task[2]))

    # 1이든 0이든 수행되는 작업이므로
    if task:
        score, time = task.pop()
        time -= 1
        if time == 0:
            result += score
        else:
            task.append((score, time))

print(result)
