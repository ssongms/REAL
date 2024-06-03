# 11729 하노이 탑 이동 순서

N = int(input()) # 원판 개수
print(2**N - 1)

def hanoi_tower(n, start, end) :
    if n == 1 :
        print(start, end)
        return 0
    
    hanoi_tower(n - 1, start, 6 - start - end) # 1단계
    print(start, end) # 2단계
    hanoi_tower(n - 1, 6 - start - end, end) # 3단계
    

hanoi_tower(N, 1, 3)