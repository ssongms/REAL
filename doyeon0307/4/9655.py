# 1. ? ??
# DP -> O(n)
n = int(input())
if n == 1 or n == 3:
  print("SK")
elif n == 2:
  print("CY")
else:
  SK_wins = [False for _ in range(n+1)]
  SK_wins[1] = 1
  SK_wins[3] = 1
  for i in range(4, n+1):
    SK_wins[i] = not SK_wins[i-1] or not SK_wins[i-3]
  if SK_wins[n]:
    print("SK")
  else:
    print("CY")

'''
?? DP? ?? ??? n=1, n=3? ? ???? ???
???? [i-1], [i-3] ???? ??? ???? ? ? ????.
-> O(1)
n=int(input())
if n%2==0:
  print("CY")
else:
  print("SK")
'''