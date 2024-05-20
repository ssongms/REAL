from sys import stdin
input = stdin.readline

# n, s = map(int, input().split())
# a = list(map(int, input().split()))
# a.sort()
# v = []
# check = [False]*n
# cnt = 0

# def solve(k, idx):
#     global cnt
#     if  k == 0:
#         cnt += 1
#         return

#     for i in range(idx,n):
#         if not check[i]:
#             check[i] = True
#             v.append(a[i])
#             solve(sum(v), i+1)
#             v.pop()
#             check[i] = False

# solve(-1,0)
# print(cnt)

n, s = map(int, input().split())
a = list(map(int, input().split()))
ans = 0

def solve(idx, sums):
    global ans
    if idx >= n:
        if sums == s:
            ans += 1
        return

    solve(idx+1, sums+a[idx])
    solve(idx+1, sums)

solve(0,0)
print(ans if s else ans-1)