#1448 삼각형 만들기
from itertools import combinations

N = int(input()) #빨대 개수 N
all = [] #입력된 모든 빨대 길이
for i in range(N):
    all.append(int(input()))

triangle = []
for c in combinations(all, 3):
    if max(c) < (sum(c) - max(c)):
        triangle.append(sum(c))

if not triangle: #if triangle list is Empty
    print(-1)
else:
    print(max(triangle)) #세 변 길이 합 최댓값