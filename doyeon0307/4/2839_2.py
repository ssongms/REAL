# 2. ���� ���
# DP -> O(n)
# minSugar[n] : nų�α׷��� ���� �� �ִ� �ּ� ���� ���� ��
# �տ������� ����ذ��� minSugar[n]�� ����
# �������� Ǯ�̵� ����
# https://www.acmicpc.net/problem/26099 (���� ��� 2 / O(1))

n = int(input())

if n == 3 or n == 5:
  print(1)

elif n == 4 or n == 7:
  print(-1)
  # 3�� 5�� �������� ���� �� ���� �ڿ����� 4�� 7

else:
  minSugar = [5000 for _ in range(n+1)]
  # �ִ밪���� �ʱ�ȭ
  # nų�α׷��� ���� �� ���� ���� ���ܵ� (4, 7)
  minSugar[3] = 1
  minSugar[5] = 1
  for i in range(6, n + 1):
    minSugar[i] = min(minSugar[i-3], minSugar[i-5]) + 1
    # i-3ų�α׷��� 3ų�α׷� �� ���� �� ��� ��
    # i-5ų�α׷��� 5ų�α׷� �� ���� �� ��� ��
    # �� �� �ּҰ�
  print(minSugar[n])
  # nų�α׷��� ���� �� ���� ���� ���� -> �ٷ� ���