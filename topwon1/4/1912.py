n = int(input())
sum = list(map(int,input().split()))

dp = [0] * n # 총합이 기록된 리스트
dp[0] = sum[0]
for i in range(1,n):
    dp[i] = max(sum[i],sum[i]+dp[i-1])
    # 현재 숫자 포함하여 쭉 더해온 값과 현재 숫자만을 비교했을 때 더 큰 값을 저장한다. 
print(max(dp))