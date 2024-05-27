# 10828: 스택

import sys

input = sys.stdin.readline
n = int(input())
stack = []

for i in range(n):
  command = input()[:-1]
  if command[0:4] == 'push':
    stack.append(int(command[5:]))

  elif command == 'pop':
    if len(stack) == 0:
      print(-1)
    else:
      print(stack.pop())
  elif command == 'size':
    print(len(stack))
  elif command == 'empty':
    if len(stack):
      print(0)
    else:
      print(1)
  elif command == 'top':
    if len(stack) == 0:
      print(-1)
    else:
      print(stack[len(stack)-1])
  else:
    continue