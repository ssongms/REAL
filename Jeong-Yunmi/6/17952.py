# 17952 과제는 끝나지 않아!

# LIFO -> Stack 사용

N = int(input()) # 이번 학기 총 minutes
Assignments = [] # 과제 list (해야할 것만 유지되도록 함)
results = 0 # 성애가 받을 과제 점수

for _ in range(N):
    a = list(map(int, input().split())) # 과제당 정보(0: 없음, 1: 점수, 소요시간)
    
    if a[0] == 0 and len(a) == 0: # 제일 처음 과제 없을 때 excetion 처리
        break

    if a[0] == 1:
        Assignments.append(a) # new 과제 들어옴
    Assignments[-1][-1] -= 1 # 당장 해야하는 과제 1분 함!
    
    if Assignments[-1][-1] == 0:
        results += Assignments[-1][1]
        Assignments.pop() # 다 했으면 뺀다.

print(results)