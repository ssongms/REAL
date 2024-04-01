#8595 히든넘버

num, word = input(), input()
num_list = []
temp = ""

for i in word:
    if i.isdigit():
        temp += i
    else:
        if temp != "":
            num_list.append(int(temp))
            temp = ""
if word[-1].isdigit():
    num_list.append(int(temp))

print(sum(num_list))