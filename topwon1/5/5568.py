from itertools import permutations

n, k = int(input()), int(input())
nums = []
cnt = set()
for i in range(n):
    num = input()
    nums.append(num)
    
for per in permutations(nums, k):
    cnt.add(''.join(per))
    
print(len(cnt))