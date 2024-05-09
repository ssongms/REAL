N = int(input())
dp = [-1] * 5001 # 최대 크기가 5000 이므로 5000번째 인덱스까지 검사하기 위해 5001 크기의 DP 배열을 생성
dp[3] = 1 # 3일 때 봉지 1개
dp[5] = 1 # 5일 때 봉지 1개
for i in range(6, N+1): # 6번 인덱스부터 N번 인덱스까지 DP 배열을 채워나감
    if dp[i-5] != -1: # i-5번 인덱스를 포장할 수 있었으면 5봉지 1개 추가하여 포장 가능
        dp[i] = dp[i-5] + 1
    elif dp[i-3] != -1: # i-3번 인덱스를 포장할 수 있었으면 3봉지 1개 추가하여 포장 가능
        dp[i] = dp[i-3] + 1
print(dp[N])