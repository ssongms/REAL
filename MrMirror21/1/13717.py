import sys

pokemonNum = int(sys.stdin.readline()) # 포켓몬 마릿수

tempName = "" # 현재 포켓몬
maxName = "" # 가장 많이 진화가능한 포켓몬
maxEvoNum = 0 # 가장 많이 진화가능한 횟수
totalEvoNum = 0 # 총 진화 횟수

for i in range(2 * pokemonNum):
  if i % 2 == 0: # 홀수번째(range() 상 짝수)행은 포켓몬 이름, 현재 포켓몬으로 저장
    tempName = sys.stdin.readline().rstrip()
  else: # 짝수번째(range() 상 홀수) 행은 필요 사탕, 보유 사탕
    inputData = sys.stdin.readline().rstrip()
    data = inputData.split()
    k = int(data[0]) # 진화시 필요 사탕
    m = int(data[1]) # 현재 보유 사탕
    if(m < k): # 현재 사탕 보유량보다 필요량이 더 많은 경우, 반복문 생략
      continue
    else:
      totalEvoNum += (m-2) // (k-2) # 총 진화 횟수 증가

    if((m-2) // (k-2) > maxEvoNum): # 가장 많이 진화 시 포켓몬 이름과 진화 수를 따로 저장
      maxEvoNum = (m-2) // (k-2)
      maxName = tempName

# 결과 출력
print(totalEvoNum)
print(maxName)
