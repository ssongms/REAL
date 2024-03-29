#입력을 pokemon dictionary로 받음
N = int(input())
pokemon = {}

#k, m은 list로 저장
for i in range(N):
  name = input()
  pokemon[name] = list(map(int, input().split()))

totalPokemon = 0
max = 0

for key, val in pokemon.items():
  cnt = 0
  k = val[0]
  m = val[1]
  while (m > 0):  #사탕을 다 쓸 때까지 반복
    m -= k        #한 번 진화
    if m < 0:     #사탕이 다 떨어지면 끝
      break
    else:         #사탕이 0이상이면 반복
      m += 2
      cnt += 1
  if cnt > max:   #maxPokemon 업데이트
    max = cnt
    maxPokemon = key
  totalPokemon += cnt #총 진화 횟수 업데이트

print(totalPokemon)
print(maxPokemon)