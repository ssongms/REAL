#11729 하노이의 탑 이동 순서
n = int(input())

def hanoi(n, start, stopover, dest):
  if(n == 1):
    print(f"{start} {dest}")
    return
  hanoi(n-1, start, dest, stopover)
  print(f"{start} {dest}")
  hanoi(n-1, stopover, start, dest)
  
print((2 ** n) -1)
hanoi(n, 1, 2, 3)