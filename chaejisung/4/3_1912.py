# 입력
n = int(input())
seq = list(map(int, input().split(" ")))

# """
# f(n) = n까지의 최대 연속합
# f(0) = 0
# f(n) = max(n, f(n-1)+n) 
# -> 연속이므로 최대 값은 이전의 최대값+현재값 or 그냥 현재값 임
# """
max_sum = [0]*(n)
max_sum[0] = 0
for i in range(0, n):
    max_sum[i] = max(seq[i], max_sum[i-1]+seq[i])
    #print(seq[i], max_sum[i-1]+seq[i])

print(max(max_sum))
