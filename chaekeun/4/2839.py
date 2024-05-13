from sys import stdin
input = stdin.readline

n = int(input())
dp = [-1]*10001

# 바텀업 방식으로한다? -> 모든 경우의 수를 구해야하는 경우에 유리한 방식이었다. 탑다운 방식이 recursion이었나? ㅇㅇ
dp[1], dp[2] = -1, -1
dp[3] = 1
dp[4] = -1
dp[5] = 1

# for i in range(6, n+1):
#     # 만약 5의 배수이면 바로 5의 배수로 때려버리면댐
#     # 그리고 나서 만약 3의 배수이면 바로 3의 배수로 때리는건 18의 예시를 생각해보면 그렇지 않은듯. 그래서 예제로 18을 준건가?
#     if i % 5 == 0:
#         dp[i] = i//5
#     else:
#         # 일단 5로 나눴을때의 나머지로 dp를해보고 노답이다 dp[9]처럼
#         # 그러면 이제 3으로 나눴을때 나누어떨어지는지 보고 그래도 노답이다 -> -1
#         if dp[i%5]==-1:
#             dp[i] == -1
#             if i%3==0:
#                 dp[i] = i//3

#         else:
#             dp[i] = dp[i%5]+i//5
# # 이렇게하니까 dp[11]에서 막힘 그래서 그런가 예제에 또 11을 준것같다.

for i in range(6, n+1):
    if min(dp[i-5], dp[i-3]) > 0:
        dp[i] = min(dp[i-5], dp[i-3])+1
    else:
        if max(dp[i-5], dp[i-3]) > 0:
            dp[i] = max(dp[i-5], dp[i-3])+1
        else:
            dp[i] = -1


print(dp[n])