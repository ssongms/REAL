N = int(input())
arr = [0]*((N+1) if (N >= 5) else (6))

"""
점화식
f(3) = 1
f(5) = 1

f(n) = max(f(n-3), f(n-5)) +1
"""

arr[3] = 1
arr[5] = 1

for i in range(6, N+1):
    if(arr[i-3] != 0 and arr[i-5] != 0):
        arr[i] = arr[i-3]+1 if (arr[i-3]<arr[i-5]) else arr[i-5]+1
    elif(arr[i-3] != 0):
        arr[i] = arr[i-3] +1
    elif(arr[i-5] != 0):
        arr[i] = arr[i-5] +1

print(-1 if (arr[N] == 0) else arr[N])




