#�Է��� pokemon dictionary�� ����
N = int(input())
pokemon = {}

#k, m�� list�� ����
for i in range(N):
  name = input()
  pokemon[name] = list(map(int, input().split()))

totalPokemon = 0
max = 0

for key, val in pokemon.items():
  cnt = 0
  k = val[0]
  m = val[1]
  while (m > 0):  #������ �� �� ������ �ݺ�
    m -= k        #�� �� ��ȭ
    if m < 0:     #������ �� �������� ��
      break
    else:         #������ 0�̻��̸� �ݺ�
      m += 2
      cnt += 1
  if cnt > max:   #maxPokemon ������Ʈ
    max = cnt
    maxPokemon = key
  totalPokemon += cnt #�� ��ȭ Ƚ�� ������Ʈ

print(totalPokemon)
print(maxPokemon)