n, m = map(int, input().split())
nums = list(map(int, input().split()))
nums.sort()

checked = [0]*n
temp = []

def N_and_M(depth, idx, n, m):
    if(depth == m):
        print(' '.join(map(str, temp)))
        return
    overlap = 0
    
    for i in range(idx, n):
        if(not checked[i] and overlap!=nums[i]):
            temp.append(nums[i])
            checked[i] = 1
            overlap = nums[i]
            N_and_M(depth+1, i+1, n, m)
            temp.pop()
            checked[i] = 0
            
N_and_M(0,0,n,m)
    