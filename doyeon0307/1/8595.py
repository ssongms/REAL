n = input()
word = input()    #입력받기
lst = list(word)  #lst에 한 글자씩 넣기

cur = ""         #현재 검사 중인 hidden number 후보
sumOfHidden = 0  #확정 hidden number 더해줌 -> 없으면 0

for w in lst:       #한 글자씩 검사
  if w.isdecimal(): #정수면 일단 cur에 붙여줌
    cur += w
  else: #정수가 아니면 cur의 길이 조건을 검사하고 sumOfHidden에 더해줌
    if cur.__len__() > 0 and cur.__len__() <= 6:
      sumOfHidden += int(cur)
    cur = ""  #cur이 hidden number던 아니던 초기화

#마지막 w가 정수일 경우 else문에 들어가지 못하므로 아래 조건이 필요함
if cur.__len__() > 0 and cur.__len__() <= 6:
  sumOfHidden += int(cur)

print (sumOfHidden)