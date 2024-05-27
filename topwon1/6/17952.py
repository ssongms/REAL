import sys

input = sys.stdin.readline

n = int(input())
stack = []
res = 0
for _ in range(n):
    li = list(map(int, input().split()))
    if li[0] == 1:
        stack.append([li[1], li[2]-1])
    elif stack and li[0] == 0:
        stack[-1][-1] = stack[-1][-1]-1
    elif not stack and li[0] == 0:
        continue
    if stack[-1][-1] == 0:
        res += stack[-1][0]
        stack.pop()
print(res)