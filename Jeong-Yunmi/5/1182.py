# 1182 부분수열의 합
# 백트래킹 -> 모든 가능한 부분수열을 탐색해 합이 S가 되는 경우를 카운트하면 됨

N, S = map(int, input().split())  # N: 수얄의 크기, S: 다 더한 값의 목표값(?)

sequence = list(map(int, input().split())) # 입력 받기

count = 0 # 카운트할 변수
stack = [(0, 0)]  # (현재 인덱스, 현재 합)

# 백트래킹 구현
while stack:
    index, current_sum = stack.pop()
    
    # 인덱스가 수열의 길이를 초과하면 종료
    if index == N:
        continue

    # 현재 원소를 포함하는 경우
    new_sum = current_sum + sequence[index]
    
    # 부분수열의 합이 S와 같으면 카운트 증가
    if new_sum == S:
        count += 1

    # 다음 원소로 진행
    stack.append((index + 1, new_sum))

    # 현재 원소를 포함하지 않는 경우를 위해 현재 상태도 저장
    stack.append((index + 1, current_sum))

print(count)