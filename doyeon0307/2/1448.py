import sys
#input()���� ������ �ð��ʰ�
N = int(sys.stdin.readline())
straws = [int(sys.stdin.readline()) for _ in range(N)]
  
straws.sort(reverse = True) #�������� ����
max = -1                    #�ִ� ���, �ﰢ���� ���� �� ������ -1 ���

for i in range(N - 2):
  long = straws[i]  #�������� ����->���� �ΰ����� ���ų� ��
  others = straws[i + 1] + straws[i + 2] #���� �� ������ ������ ��
  if long < others and (long + others) > max:
    #�ﰢ�� ����:���� �� ��>������ �� ���� ��
    #�ﰢ�� ������ �����ϰ� max���� ũ�� max ������Ʈ
    max = long + others

print(max)

'''
��ģ �κ�;
  ������������ ������ ���̹Ƿ�
  ���ʷ� ã�� �ﰢ���� ���� ū �ﰢ��
  max�� �ʿ� ����, �ﰢ���̸� �ٷ� ����ϸ� ��
'''