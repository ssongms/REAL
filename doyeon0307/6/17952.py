# 3. ������ ������ �ʾ�! https://www.acmicpc.net/problem/17952

# �ֱٿ� ���� �������, ������ �ٷ� ����
# ���� ���� ���ο� ���� -> �ϴ� �� �ߴ��ϰ� ���ο� ���� ����
# ���ο� ������ ������ ������ �ϴ� ���� �̾ ����

# ������ �� �� �ɸ��� �� �� ����
# �����ϸ� ������ ����

import sys
input = sys.stdin.readline

class homework:
  def __init__(self):
    self.hw = [] # [����, �Ϸ���� ���� �ð�]
    self.idx = -1 # ���� ���� ���� ������ �ε���
    self.scr = 0 # ���� ����
  
  def newHW(self, score, time):
    if time > 1:
      self.hw.append([score, time - 1]) # ���� ��Ͽ� �־��� & �ٷ� �����ϹǷ� ���� �ð����� 1�� ����
      self.idx = len(self.hw) - 1 # ���� ���� ������ ���ο� ������ ������Ʈ

    else: # ������ 1�� �ɸ��ٸ� ���ڸ��� ���� -> �ٷ� ���� ������ ���� ������ ����
      self.scr += score

  def noHW(self):
    if self.idx > -1: # ���� ���� ������ �ִٸ�
      self.hw[self.idx][1] -= 1 # ���� �Ϸ���� ���� �ð����� 1�� ����
      if self.hw[self.idx][1] == 0: # ������ �Ϸ��ߴٸ�
        self.scr += self.hw.pop()[0] # ���� ��Ͽ��� �����ϰ� ���� ������ ���� ������ ����
        if self.hw: # pop�ϰ� ������ ���Ҵٸ� ������ �ϴ� ������ ���ư���
          self.idx -= 1
        else: # �ƹ� ������ ���ٸ� -1�� �ʱ�ȭ
          self.idx = -1
  
  def __str__(self):
    return str(self.scr)


n = int(input())
sung = homework() # ������ ����

for _ in range(n):
  input_ = list(map(int, input().split()))
  if input_[0] == 1:
    sung.newHW(input_[1], input_[2])
  else:
    sung.noHW()

print(sung)