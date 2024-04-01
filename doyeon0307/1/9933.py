N = int(input())
words = []  #입력을 넣어줄 리스트

for i in range(N):
  words.append(input())

for w1 in words:  #자기자신을 포함해 리스트 모든 원소 비교
  for w2 in words:
    if w1 == w2[::-1]:  #뒤집은 것과 같은지 비교
      password = w1     #답이 유일하므로 답을 찾고 바로 break
      break

print(password.__len__(), password[password.__len__()//2])