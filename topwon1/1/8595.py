# n = int(input())
# word = input()

# 히든넘버를 담아둘 리스트
# lst=[]
# 현재 위치(인덱스 값)을 알기 위한 변수 idx
# idx = 0
# for i in range(n):
      # A-Za-z는 아스키값 65이상이기에 아스키값이 65이상일 경우 continue
#     if ord(word[i]) >= 65:
#         continue
       # else 는 i가 숫자일 경우에만 진입하게 됨.
#     else:
        # i 가 숫자인데 이전의 인덱스와 1차이가 난다면 연속된 수이기에 연속된 숫자인 한 히든넘버이다.
#         if i - idx == 1:
        # 입력이 2 a1 이라면 앞이 문자임에도 i - idx == 1 을 만족하여 indexError가 발생하게 된다.
        # 이를 예외처리하기 위해 lst가 비었는데 i - idx == 1을 만족한다면 word[i]를 그냥 lst에 추가하라는 예외처리.
#             if len(lst) == 0:
#                 lst.append(word[i])
#                 idx = i
#                 continue
            # lst 의 마지막 요소와 word[i]를 더한다. 둘은 str타입이기에 "1" + "3" = "13"꼴로 표현된다.
#             lst[-1] = lst[-1] + word[i]
            # 인덱스 번호를 현재 숫자의 번호로 포맷
#             idx = i
#             continue
        # 앞이 문자인 경우 즉, 연속된 숫자가 아닌경우
        # lst에 word[i]를 추가한다.
#         lst.append(word[i])
#         idx = i

# sum = 0
# if len(lst) == 0:
#     print(0)
# else:
#     for i in lst:
#         sum += int(i)
#     print(sum)


n = input()
word = input()
#A-Za-z를 모두 공백' ' 으로 변경. 숫자만 남기기 위해.
#공백을 두게 되면 붙어있는 히든넘버 떨어진 히든 넘버를 쉽게 구분할 수 잇음.
for i in range(0,26):
    A = chr(i+65)
    word = word.replace(A,' ')
    a = chr(i+97)
    word = word.replace(a,' ')

#공백을 기준으로 split하여 히든넘버를 list에 저장하고 sum을 통해 총합을 출력.
#히든넘버가 없다면 공백만 남기에 0 이 출력됨.
print(sum(list(map(int,word.split()))))