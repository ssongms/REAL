N = int(input())
words = []  #�Է��� �־��� ����Ʈ

for i in range(N):
  words.append(input())

for w1 in words:  #�ڱ��ڽ��� ������ ����Ʈ ��� ���� ��
  for w2 in words:
    if w1 == w2[::-1]:  #������ �Ͱ� ������ ��
      password = w1     #���� �����ϹǷ� ���� ã�� �ٷ� break
      break

print(password.__len__(), password[password.__len__()//2])