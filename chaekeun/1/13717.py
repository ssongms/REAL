from sys import stdin
input = stdin.readline

n = int(input())
p, k, m = '', 0, 0
ans1, ans2 = 0, 0
maxEvol = 0

def sol():
    global k, m
    cnt = 0
    while True:
        if k > m:
            break
        m = m-k+2
        cnt += 1

    return cnt 


for i in range(n):
    p = input().strip()
    k, m = map(int, input().split())

    evol = sol()
    ans1 += evol

    if maxEvol < evol:
        maxEvol = evol
        ans2 = p

print(ans1)
print(ans2)
