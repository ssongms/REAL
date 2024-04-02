# 18310 안테나

import sys

num = int(sys.stdin.readline()) # 집 개수 입력
houses = sys.stdin.readline().rstrip().split() # 집 위치 입력
housesInt = sorted([int(i) for i in houses]) # 정수, 리스트, 정렬 진행

print(housesInt[(num-1)//2]) # 중앙값 이용, 가장 중앙에 가까운 집 출력