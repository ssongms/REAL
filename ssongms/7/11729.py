N = int(input())

def hanoiTower(n, start, end, sub):
    if n == 1 :
        print(start, end)
        return
    else: 
        hanoiTower(n-1, start, sub, end)
        print(start, end)
        hanoiTower(n-1, sub, end, start)

print(2**N-1) # 이동 횟수를 세어보니 횟수에도 규칙이 있다는 것을 발견
hanoiTower(N, 1, 3, 2) # N개의 원반을 1번 타워에서(From) 3번 타원까지(To) 2번 타워를 거쳐서(Sub) 감