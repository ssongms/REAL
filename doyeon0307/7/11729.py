# �ϳ��� ž �̵� ���� https://www.acmicpc.net/problem/11729

# ���� n���� s���� e�� �ű�� ���
# 1. n-1���� s���� x��
# 2. �� ���� ���� 1���� s���� e��
# 3. n-1���� x���� e��

# �̵�Ƚ���� "2**n-1"���� ���ϰ�
# answer�� append�ϴ� ��� �ٷ� print�ص� ��
# ���� : t(n) = 2t(n-1) + 1

N = int(input())
answer = []

def recur (n, s, e):
  if n == 1:
    answer.append(str(s) + ' ' + str(e))
  else:
    x = 6 - s - e
    recur (n - 1, s, x)
    recur (1, s, e)
    recur (n - 1, x, e)

recur (N, 1, 3)
print (len(answer))
for a in answer:
  print (a)