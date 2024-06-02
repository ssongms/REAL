import sys
input = sys.stdin.readline

n, m = map(int, input().split())
integers = sorted(list(map(int, input().split())))
sequences = []

# seq : ����� �ִ� ����
# i : ���� �ֱٿ� �߰��� ������ �ε���
def findSequence(seq, i):
  if seq.__len__() == m:
    if seq not in sequences:
      sequences.append(seq)
  for j in range(i + 1, n):
    s = seq[:]
    s.append(integers[j])
    findSequence(s, j)

for idx, element in enumerate(integers):
  seq = [element]
  findSequence(seq, idx)

for s in sequences:
  for n in s:
    print(n, end=' ')
  print()