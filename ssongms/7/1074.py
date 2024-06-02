# import sys

# N, row, col = map(int, sys.stdin.readline().split())

# # Z를 왼쪽 위를 1사분면, 오른쪽 위를 2사분면, 왼쪽 아래를 3사분면, 오른쪽 아래를 4사분면이라고 하겠음
# # 1 2
# # 3 4
# def zVisit(n, x, y):
#     if n == 0:
#         return 0
#     half = pow(2, n-1) # 재귀의 깊이가 깊어질수록 2의 n승으로 나누어지는 것을 이용
#     if x < half and y < half: # 1사분면
#         return zVisit(n-1, x, y)
#     if x < half and y >= half: # 2사분면
#         return half * half + zVisit(n-1, x, y-half)
#     if x >= half and y < half: # 3사분면
#         return 2 * half * half + zVisit(n-1, x-half, y)
#     return 3 * half * half + zVisit(n-1, x-half, y-half) # 4사분면

# print(zVisit(N, row, col))

import sys
sys.setrecursionlimit(10000)
N, r, c = map(int, sys.stdin.readline().split())
count = 0

def calcVisit(row, col, n):
    global count
    if n == 2:
        for i in range(2):
            for j in range(2):
                if row+i == r and col+j == c:
                    print(count)    
                    exit()
                count+=1
                
    else:
        if r < row + n//2 and c < col + n//2:
            calcVisit(row, col, n//2)

        elif r < row + n//2 and c >= col + n//2:
            count += 1 * ((n//2) ** 2)
            calcVisit(row, col+n//2, n//2)

        elif r >= row + n//2 and c < col + n//2:
            count += 2 * ((n//2) ** 2)
            calcVisit(row+n//2, col, n//2)

        else:
            count += 3 * ((n//2) ** 2)
            calcVisit(row+n//2, col+n//2, n//2)

calcVisit(0, 0, 2**N) 