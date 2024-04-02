#2847 게임을 만든 동준이
#감소만 해야함 && 마지막 레벨의 점수는 무조건 고정 && 뒤에서부터 앞으로 최소로 감소해야함 -> 점수를 역순으로
N = int(input()) #레벨 수
score = [] #점수
for i in range(N):
    score.append(int(input()))

reverse_score = list(reversed(score)) #점수 역순
decrease_sum = 0 #감소된 점수 합

for i in range(N-1):
    if reverse_score[i] <= reverse_score[i+1]:
        decrease_sum += reverse_score[i+1] - (reverse_score[i] - 1)
        reverse_score[i+1] = reverse_score[i] - 1 #감소 필요한 경우에 최소한의 감소

print(decrease_sum)