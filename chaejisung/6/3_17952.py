import sys

N = int(sys.stdin.readline())
stack = []
score = 0

for _ in range(N):
    command = list(map(int, sys.stdin.readline().split()))
    #print(command)
    if(command[0] == 1):
        stack.append([command[1], command[2]])
    
    if(stack):
        stack[-1][1] -= 1
        if(stack[-1][1] == 0):
            score += stack.pop()[0]

print(score)
        
