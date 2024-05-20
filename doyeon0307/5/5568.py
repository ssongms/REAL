import itertools

n = int(input())
k = int(input())
numbers = [input() for _ in range(n)]
# 순서를 고려해야 함 -> 조합X, 순열O
permutOfNumbers = itertools.permutations(numbers, k)
# set -> 중복이 자동으로 제거됨
newNumbers = set()

for permut in permutOfNumbers:
  newNum = ""
  for n in permut:
    newNum += n
  newNumbers.add(newNum)

print(newNumbers.__len__())