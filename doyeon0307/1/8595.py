n = input()
word = input()    #�Է¹ޱ�
lst = list(word)  #lst�� �� ���ھ� �ֱ�

cur = ""         #���� �˻� ���� hidden number �ĺ�
sumOfHidden = 0  #Ȯ�� hidden number ������ -> ������ 0

for w in lst:       #�� ���ھ� �˻�
  if w.isdecimal(): #������ �ϴ� cur�� �ٿ���
    cur += w
  else: #������ �ƴϸ� cur�� ���� ������ �˻��ϰ� sumOfHidden�� ������
    if cur.__len__() > 0 and cur.__len__() <= 6:
      sumOfHidden += int(cur)
    cur = ""  #cur�� hidden number�� �ƴϴ� �ʱ�ȭ

#������ w�� ������ ��� else���� ���� ���ϹǷ� �Ʒ� ������ �ʿ���
if cur.__len__() > 0 and cur.__len__() <= 6:
  sumOfHidden += int(cur)

print (sumOfHidden)