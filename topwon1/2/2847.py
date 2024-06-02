import sys
n = int(sys.stdin.readline())

# 클리어 점수를 담을 list
nums = []
for i in range(n):
    nums.append(int(sys.stdin.readline()))

count = 0
for _ in range(len(nums)-1):
    # num = 가장 높은 단계의 점수
    num = nums.pop()
    if num <= nums[-1]:
        # 이전 단계의 점수가 이후 단계의 점수보다 낮아질 때까지 -1.
        while num <= nums[-1]:
            nums[-1] -= 1
            count += 1
print(count)