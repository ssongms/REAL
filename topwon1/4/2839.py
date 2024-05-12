num = int(input())
cnt = 0

while num >= 0: # 무게가 0 이상이면 계속 반복
  if num % 5 == 0: # 5키로로 정확히 나누어 떨어지는 경우
    cnt += int(num // 5)
    print(cnt)
    break
  num -= 3 # 5키로로 나누어 떨어지지 않으면 3키로 1봉지 사용.
  cnt += 1
  
else:
  print(-1)