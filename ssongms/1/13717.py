import sys

n = int(sys.stdin.readline())
poketmonList = [(input()) for _ in range(2*n)] # 입력 받음

evolutionList = [] # 각 포켓몬의 진화 가능한 횟수를 저장할 배열
totalEvolution = 0 # 모든 포켓몬의 진화 횟수를 누적하여 저장 (결과 출력에 사용)
for i in range(0, len(poketmonList), 2): # 각 포켓몬당 두 번의 입력을 받았으니, step을 2로 함
    evolution = 0 # 가능한 진화 횟수를 저장
    need, hold = map(int, poketmonList[i+1].split(" ")) # 스페이스바를 기준으로 진화하는데 필요한 사탕 갯수, 보유한 사탕 갯수로 split (정수형으로 저장)
    while hold >= need: # 보유한 사탕이 진화할 때 필요한 사탕의 개수보다 많을 때 수행
        hold -= need # 진화를 했으니 필요 사탕 개수를 뺌
        hold += 2 # 진화 후 2개의 사탕을 받음
        evolution += 1 # 해당 포켓몬의 진화 카운트
        totalEvolution += 1
    evolutionList.append(evolution)

print(totalEvolution)
print(poketmonList[evolutionList.index(max(evolutionList)) * 2])