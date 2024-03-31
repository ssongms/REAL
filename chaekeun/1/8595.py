from sys import stdin
input = stdin.readline

n = int(input())
word = input()
hiddenNum = []

for char in word:
    a = ord(char)
    temp = ""

    if not(a >= 65 and a <= 122): #영어가 아니면
        temp += char
        continue
    else: #영어 나오면
        num = int(temp)
        hiddenNum.append(num)
        

print(sum(hiddenNum))

for char in word:
    a = ord(char)

    if a >= 65 and a <= 122: #영어면
        continue
    else:
        

        