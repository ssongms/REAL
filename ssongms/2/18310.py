import sys
houseNum = int(sys.stdin.readline())
houseList = list(map(int, sys.stdin.readline().split()))

# 중앙값 이용
houseList.sort() # 오름차순 정렬
print(houseList[(houseNum-1)//2]) # 중앙 위치를 출력
