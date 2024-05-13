#13717 포켓몬 GO

N = int(input())
pocketmon = []
evol_sum = 0
for i in range(N):
    p_name = input()
    p_k, p_m = map(int, input().split())
    evol_num = 0
    while p_k <= p_m:
        p_m = p_m - p_k + 2
        evol_num += 1
    evol_sum += evol_num
    pocketmon.append([p_name, evol_num])

print(evol_sum)
max, idx = 0, 0
for i in range(N):
    if max < pocketmon[i][1]:
        max = pocketmon[i][1]
        idx = i
print(pocketmon[idx][0])