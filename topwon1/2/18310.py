import sys
n = int(sys.stdin.readline())
nums = list(map(int,sys.stdin.readline().split()))
# 집의 위치 값을 오름차순으로 정렬.
nums.sort()
# 오름차순으로 정렬된 집의 위치 값 중 가운데 위치 값에 안테나를 설치하면 최소 거리.
middle = nums[(n-1)//2]
print(middle)