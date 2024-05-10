# 2. ���� ���
# Brute-force -> O(n^2)
# n <= 5000�̹Ƿ� �غ��� ��

n = int(input())
minSugar = 5000
for i in range(n//5+1):
  for j in range(n//3+1):
    if i*5 + j*3 == n:
      minSugar = min(minSugar, i+j)
if minSugar == 5000:
  print(-1)
else:
  print(minSugar)