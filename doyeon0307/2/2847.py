'''
���� ������ ���� < ����� ������ ����
-> ������ ������ ������ �ִ� ����

������ ������ ���� �ּ������� �� ��
-> �� ������ ���� = �� ������ ���� - 1
'''

import sys
#sys.stdin.readline()->���� �Է�
#[]�ȿ� �Է��Լ� & for��->n�� �Է¹޾� �ٷ� ����Ʈ ����
N = int(sys.stdin.readline())
level = [int(sys.stdin.readline()) for _ in range(N)]

cnt = 0 #������ ���� Ƚ��
for i in range(N - 1, 0, -1):
  if level[i] <= level[i - 1]:
    level[i - 1] = level[i] - 1
    cnt += level[i - 1] - level[i] + 1

print(cnt)