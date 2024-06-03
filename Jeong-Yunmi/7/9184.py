#9284 신나는 함수 실행
'''
재귀함수 있는 그대로 구현했을 경우: 값이 커지면 시간 굉장히 오래 걸림 
-> 3차원 배열로 중간과정 저장해주자.

def w(a, b, c):
    if a <= 0 or b <= 0 or c <= 0:
        return 1
    if a > 20 or b > 20 or c > 20:
        return w(20, 20, 20)
    elif a < b and b < c:
        return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
    else:
        return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
'''

w_array = [[[0 for _ in range(51)] for _ in range(51)] for _ in range(51)]
w_array[0][0][0] = 1

def w(a, b, c):
    if w_array[a][b][c] != 0: return w_array[a][b][c]
    else:
        if a <= 0 or b <= 0 or c <= 0:
            return 1
        elif a > 20 or b > 20 or c > 20:
            return w(20, 20, 20)
        elif a < b and b < c:
            w_array[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
            return w_array[a][b][c]
        else:
            w_array[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
            return w_array[a][b][c]

while True:
    a, b, c = map(int, input().split())
    if (a, b, c) == (-1, -1, -1): # 입력의 마지막 (종료)
        break
    print(f"w({a}, {b}, {c}) =", w(a, b, c))