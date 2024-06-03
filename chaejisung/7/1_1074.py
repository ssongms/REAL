# 1074
import sys

N, r, c = map(int, sys.stdin.readline().split(" "))

def solution(N, start, rStand, cStand):
    if(N == 0):
        print(start)
        return None
    
    halfN = 2**(N-1)
    
    if(r < rStand and c < cStand): # 1사분면
        solution(N-1, start, rStand-halfN//2, cStand-halfN//2)
    elif(r < rStand and c >= cStand): # 2사분면
        solution(N-1, start+halfN**2, rStand-halfN//2, cStand+halfN//2)
    elif(r >= rStand and c < cStand): # 4사분면
        solution(N-1, start+(halfN**2)*2, rStand+halfN//2, cStand-halfN//2) 
    elif(r >= rStand and c >= cStand): # 3사분면
        solution(N-1, start+(halfN**2)*3, rStand+halfN//2, cStand+halfN//2)
    
solution(N, 0, 2**(N-1), 2**(N-1))
