# 3. 연속합
# DP
# prefixSum[i] = 임의의 원소부터 i번째 원소까지 더한 최대 연속합
# point : a < b -> a + c < b + c
#         a < b를 알면 a+c와 b+c를 계산할 필요X
# 연속합은 시작하는 원소가 중요함 : 이후에 더할 정수가 정해져 있기 때문
# 연속합을 이어나갈지, 끊고 새로 시작할 지 결정 -> 연속합과 입력값 비교

n = int(input())
integers = list(map(int, input().split()))

prefixSum = integers[:]
for i in range(1, n):
  prefixSum[i] = max(prefixSum[i-1]+integers[i], integers[i])
print(max(prefixSum))