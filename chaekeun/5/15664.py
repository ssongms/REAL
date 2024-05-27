from sys import stdin
from itertools import combinations
input = stdin.readline


# def solve(k, cnt):
#     if cnt == m:
#         temp.append(" ".join(map(str, ans)))
#         print(temp)
#         return

#     for i in range(k, n):
#         if not check[i]:
#             check[i] = True
#             ans.append(a[i])
#             solve(i+1, cnt+1)
#             ans.pop()
#             check[i] = False

# solve(0,0)
# temp = list(set(temp))
# temp.sort()
# print(temp)
# for elem in temp:
#     print(elem)

n, m = map(int, input().split())
a = sorted(list(map(int, input().split())))
check = [False] * n
v = []
s = set()


def solve(cnt, idx):
    # if 정답이라면: 정답출력 or 저장 등등 
    if cnt == m: 
        print(v)
        print(tuple(v))
        # s.add(v) 오류발생
        s.add(tuple(v))
        return
    # for 뱉을 수 있는 모든 자식노드들에 대해서:
    for i in range(idx, n):
        # if 정답이 유망하다면:
        if not check[i]:
            # 자식노드로 이동
            check[i] = True
            v.append(a[i])
            # 재귀함수
            solve(cnt+1, i+1)
            # 부모노드로 이동 (=이전노드로 돌아간다)
            v.pop()
            check[i] = False

solve(0,0)

# sorted함수를 쓰면 코드길이가 좀 더 줄어든다
print(s)
for k in sorted(s):
    
    print(' '.join(map(str, k)))

# combinations를 이용한 풀이
# for k in sorted(set(combinations(a,m))):
#     print(' '.join(map(str, k)))