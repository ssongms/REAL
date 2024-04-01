from sys import stdin
input = stdin.readline

n = int(input())
p, k, m = '', 0, 0
ans1, ans2 = 0, 0
maxEvol = 0

def sol():
    # 전역변수 k = 진화시키기 위해 필요한 사탕
    # 전역변수 m = 현재 가지고 있는 사탕 
    global k, m
    # cnt = 진화횟수 count
    cnt = 0
    while True:
        # 종료조건 : 가지고 있는 사탕이 필요한 사탕보다 모자랄 때
        if k > m:
            # while문 빠져나온다
            break
        # 필요한 사탕 수 깎아주고
        m = m-k+2
        # 진화횟수 업데이트
        cnt += 1

    return cnt 


for i in range(n):
    # 단순 공백제거(개행문자 제거)
    p = input().strip()
    # 개행문자를 기준으로 분리하여 반환된 리스트(split)의 요소를 돌면서(map) int로 변환
    k, m = map(int, input().split())

    # cnt로 반환된 진화횟수를 evol에 저장
    evol = sol()
    # 진화시킬 수 있는 포켓몬의 총 마리 수 ans1에 누적
    ans1 += evol

    # 만약 지금까지의 최대진화기록보다 이번 회차에서 진화한 수가 더 많으면
    if maxEvol < evol:
        # 최대진화기록 갱신
        maxEvol = evol
        # 가장 많이 진화한 이번 회차의 포켓몬 이름 저장
        ans2 = p

print(ans1)
print(ans2)
