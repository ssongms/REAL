from itertools import combinations

n, s = map(int, input().split())
nums = list(map(int, input().split()))
cnt = 0

for i in range(1, n + 1):
    for k in combinations(nums, i):
        if sum(k) == s:
            cnt += 1

print(cnt)