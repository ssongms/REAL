# 2. 설탕 배달
# DP -> O(n)
# minSugar[n] : n킬로그램을 담을 수 있는 최소 설탕 봉지 수
# 앞에서부터 계산해가며 minSugar[n]을 구함
# 수학적인 풀이도 가능
# https://www.acmicpc.net/problem/26099 (설탕 배달 2 / O(1))

n = int(input())

if n == 3 or n == 5:
  print(1)

elif n == 4 or n == 7:
  print(-1)
  # 3과 5의 조합으로 만들 수 없는 자연수는 4와 7

else:
  minSugar = [5000 for _ in range(n+1)]
  # 최대값으로 초기화
  # n킬로그램을 만들 수 없는 경우는 제외됨 (4, 7)
  minSugar[3] = 1
  minSugar[5] = 1
  for i in range(6, n + 1):
    minSugar[i] = min(minSugar[i-3], minSugar[i-5]) + 1
    # i-3킬로그램에 3킬로그램 한 봉지 더 들면 됨
    # i-5킬로그램에 5킬로그램 한 봉지 더 들면 됨
    # 이 중 최소값
  print(minSugar[n])
  # n킬로그램을 만들 수 없는 경우는 없음 -> 바로 출력