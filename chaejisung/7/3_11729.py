# 11729
import sys
import copy

# 하노이의 탑 해결법
# 1. 원판의 개수가 1개 -> 해당 원판을 3번으로 옮기기
# 2. 원판 개수 2개 
#     - 가장 큰거 제외한 나머지 원판을 2번으로 옮기기
#     - 가장 큰 원판을 3번으로 옮기기
#     - 중간 기둥에 옮긴 나머지 원판을 3번으로 옮기기
# ex 3
1:5 2 3
1:4 2 3:1
1:4 2:1 3:1
1:4 2:2 3
1:3 2:2 3:1
1:4 2:1 3:1
1:4 2 3:2
1:3 

N = int(sys.stdin.readline())
stage = []
count = 0

def solution(prisbeeNum, first, second, third):
    global count
    count += 1
    
    if(prisbeeNum == 1):
        stage.append(first + " " + third)
        return count+1
    else:
        solution(prisbeeNum-1, first, third, second)
        stage.append(first + " " + third)
        solution(prisbeeNum-1, second, first, third)

solution(N, "1", "2", "3")
print(count)
for i in stage:
    print(i)
    
    
    
    
    


