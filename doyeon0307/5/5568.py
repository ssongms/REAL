import itertools

n = int(input())
k = int(input())
numbers = [input() for _ in range(n)]
# ������ ����ؾ� �� -> ����X, ����O
permutOfNumbers = itertools.permutations(numbers, k)
# set -> �ߺ��� �ڵ����� ���ŵ�
newNumbers = set()

for permut in permutOfNumbers:
  newNum = ""
  for n in permut:
    newNum += n
  newNumbers.add(newNum)

print(newNumbers.__len__())