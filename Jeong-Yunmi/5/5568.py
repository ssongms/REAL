# 5568 카드 놓기

"""
백트래킹을 사용하여 "모든 가능한 카드 조합"을 선택 && 이를 string으로 변환에 set에 추가(중복 제거)

결과적으로 set의 length를 출력

"""

import itertools # 가능한 모든 조합 쉽게 찾기 위해

n = int(input()) # 총 카드 개수
k = int(input()) # 고를 카드 개수
cards = [] # 모든 카드 리스트
for _ in range(n):
    cards.append(str(input())) # 숫자 나열하는 방식으로 합칠 것이므로 string으로 받음

results = set() # 중복 제거 위해 빈 set으로 초기화

# 가능한 모든 조합 찾기
for combination in itertools.permutations(cards, k): # k개의 카드를 선택하는 모든 조합 생성
    number = ''.join(combination) # 조합을 합쳐 하나의 숫자로 만듦 (tuple 안 요소들 합쳐주는 코드)
    results.add(number) # 모든 경우의 결과를 결과 set에 추가

print(len(results))