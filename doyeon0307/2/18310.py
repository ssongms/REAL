import sys
'''
loc[] : �Է� ���� (������ ��ġ)
���׳��� ��ġ�� loc[]�� �߾Ӱ�
'''
N = int(sys.stdin.readline())
loc = list(map(int, sys.stdin.readline().split()))
loc.sort()

print(loc[(N-1)//2])