from itertools import combinations

n, m = map(int, input().split())
nums = list(map(int, input().split()))
lst = sorted(set(combinations(sorted(nums), m)))

for i in lst:
    for k in i:
        print(k, end=" ")
    print()