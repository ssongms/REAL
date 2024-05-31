# 1. Z https://www.acmicpc.net/problem/1074

# 00 01  0 1
# 10 11  2 3
# �̰� �ϳ��� z�� ���� ��� ��ǥ�� {00 01 10 11}���� ���� ����

n, r, c = map(int, input().split())

# s = size, z = z�� ù��° ��, (i, j) = z�� ù��° ��ǥ
def recur (s, z, i, j):
  if s == 1:
    z = z + 2 if r > i else z # ������ Ŀ���� +2
    z = z + 1 if c > j else z # ������ Ŀ���� +1
    print(z)
    return
  si = (r - i) // s
  sj = (c - j) // s

  recur (s // 2, z + (2 * si + sj) * (s ** 2), i + si * s, j + sj * s)

recur(2 ** (n - 1), 0, 0, 0)