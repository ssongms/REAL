# 15664 N과 M (10)

N, M = map(int, input().split())
sequence = list(map(int, input().split()))

sequence.sort() # 입력 받은 수열을 오름차순으로 정렬
result = [] # 결과를 저장할 리스트
stack = [(0, [])]  # (현재 인덱스, 현재 수열)

# 백트래킹으로 구현
while stack:
    index, current_sequence = stack.pop()

    # 수열의 길이가 M인 경우 출력
    if len(current_sequence) == M:
        result.append(current_sequence)
        continue

    for i in range(index, N): # N까지 반복
        # if len(current_sequence) == 0 or current_sequence[-1] <= sequence[i]:
        #     stack.append((i, current_sequence + [sequence[i]]))
        stack.append((i, current_sequence + [sequence[i]]))

# 결과를 사전 순으로 출력
for seq in sorted(result):
    print(' '.join(map(str, seq)))