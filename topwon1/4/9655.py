n = int(input())

dp = [-1]*1001
dp[1] = 1 #상근 승리
dp[2] = 0 #창영 승리
dp[3] = 1 #상근 승리

for i in range(4,n+1):
    if dp[i-1] == 1 or dp[i-3] == 1: #i개의 돌갯수에서 1개 뺀 경우, 3개 뺀 경우에 상근이가 이겼다면 i개 돌갯수에선 창영이의 승리 
        dp[i] = 0
    else: # i개 돌갯수일때 상근이의 승리로 우선 설정.
        dp[i] = 1

if dp[n]==1:
    print('SK')
else:
    print('CY')



# n = int(input())

# if n%2==0:
#     print('CY')
# else:
#     print('SK')