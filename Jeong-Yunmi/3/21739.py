MOD = 10**9 + 7
n = int(input())
d = [0] * (n + 1)
d[0] = 1

for i in range(1, n + 1):
    for j in range(i):
        d[i] = (d[i] + d[j] * d[i - j - 1]) % MOD

print(d[n])