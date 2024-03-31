import sys
n = int(input())
words = [sys.stdin.readline().strip() for _ in range(n)]

for i in words:
    for j in words:
        # words의 i번째 단어를 뒤집은 것과 j번째 단어가 같다면
        if i[::-1] == j:
            # length 변수에 단어의 길이를 저장
            length = len(i)
            # mid_word 변수에 단어의 가운데 index의 값 즉, 단어의 가운데 글자를 저장
            mid_word = i[len(i) // 2]
            break

print(length, mid_word)