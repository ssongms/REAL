#9933 민균이의 비밀번호

N = int(input())
text = []
for i in range(N):
    text.append(input())

for i in text:
    reversed_i = "".join(reversed(i))
    if reversed_i in text:
        print(len(reversed_i), i[len(reversed_i) // 2])
        break