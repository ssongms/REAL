# 1. ?? https://www.acmicpc.net/problem/10828

import sys # ???? ?? . ???? input? ??? ??
input = sys.stdin.readline

class myStack:
  def __init__(self):
    self.stack = []
    self.length = 0
    
  def _func (self, cmd, param):
    if cmd == "push":
      x = int(param)
      self._push(x)
    if cmd == "pop":
      self._pop()
    if cmd == "size":
      self._size()
    if cmd == "empty":
      self._empty()
    if cmd == "top":
      self._top()

  def _push(self, x):
    self.stack.append(x)
    self.length += 1

  def _pop(self):
    if self.length:
      ans = self.stack[self.length - 1]
      self.stack.pop()
      self.length -= 1
      print(ans)
    else:
      print(-1)

  def _size(self):
    print(self.length)

  def _empty(self):
    if self.length:
      print(0)
    else:
      print(1)
    
  def _top(self):
    if self.length:
      print(self.stack[self.length - 1])
    else:
      print(-1)

s = myStack() # () ???..
N = int(input())
for i in range(N):
  input_lst = list(input().split())
  cmd = input_lst[0]
  param = input_lst[1] if len(input_lst) > 1 else -1
  s._func(cmd, param)