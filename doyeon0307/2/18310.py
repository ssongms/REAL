import sys
'''
loc[] : 입력 저장 (집들의 위치)
안테나의 위치는 loc[]의 중앙값
'''
N = int(sys.stdin.readline())
loc = list(map(int, sys.stdin.readline().split()))
loc.sort()

print(loc[(N-1)//2])