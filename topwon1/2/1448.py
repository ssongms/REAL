import sys
# 빨대의 총 갯수
n = int(sys.stdin.readline())

# 빨대별 길이를 담을 list
nums = []
for i in range(n):
    nums.append(int(sys.stdin.readline()))
# 빨대 길이가 긴 순서대로 정렬
nums.sort(reverse=True)

total = 0
for i in range(n-2):
    # 두 변 길이의 합이 한 변의 길이보다 길면 삼각형. 
    if nums[i] < nums[i+1] + nums[i+2]:
        total = nums[i] + nums[i+1] + nums[i+2]
        break
    else:
        continue

if total == 0:
    print(-1)
else:
    print(total)