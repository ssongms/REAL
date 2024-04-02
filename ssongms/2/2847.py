import sys

levelNum = int(sys.stdin.readline())
scoreList = []
discount = 0 
for _ in range(levelNum):
    scoreList.append(int(sys.stdin.readline()))

for i in range(len(scoreList)-1, 0, -1): # 'discount가 최소' 조건이 있기 때문에 맨 뒤에서부터 검사
    if scoreList[i-1] >= scoreList[i]: # 같은 경우도 포함함
        discount += scoreList[i-1] - (scoreList[i] - 1) # 감소값(discount)은 본인 값에서 (본인 뒤 값-1) 을 뺀 값
        scoreList[i-1] = scoreList[i] - 1 # 최소한으로 만족시키기 위해 1 적은 수로 저장
    
print(discount)