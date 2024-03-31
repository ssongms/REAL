n = int(input())

# 총 진화 횟수 카운트를 위한 변수 evol
evol = 0
# 가장 많이 진화한 포켓몬의 진화 횟수를 담는 변수 best
best = 0
# 가장 많이 진화한 포켓몬 이름을 담는 변수 poketmon
poketmon = ''
for i in range(n):
    name = input()
    k,m = input().split()
    k = int(k)
    m = int(m)
    # while 돌기 전 i번째 포켓몬의 진화횟수를 0으로 초기화
    cnt = 0
    # 가진 사탕의 개수를 진화에 필요한 사탕의 개수로 나눌 수 있을때까지 반복
    while m // k != 0:
        # 1회 진화후에 가진 사탕의 개수는 진화에 필요한 사탕 개수를 빼고 +2를 한것과 같다
        m = m - k + 2
        # evol ,cnt에 진화횟수 1회를 더한다
        evol += 1
        cnt += 1
    # 사탕의 개수에 따라 최대한의 진화를 마친 후 i번째 포켓몬의 진화횟수가
    # 현재까지 가장 많이 진화한 포켓몬의 진화 횟수보다 크다면 poketmon, best를 i번째 포켓몬의 이름과 진화횟수로 포맷
    if cnt > best:
        poketmon = name
        best = cnt

print(evol)
print(poketmon)