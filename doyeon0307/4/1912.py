# 3. ������
# DP
# prefixSum[i] = ������ ���Һ��� i��° ���ұ��� ���� �ִ� ������
# point : a < b -> a + c < b + c
#         a < b�� �˸� a+c�� b+c�� ����� �ʿ�X
# �������� �����ϴ� ���Ұ� �߿��� : ���Ŀ� ���� ������ ������ �ֱ� ����
# �������� �̾����, ���� ���� ������ �� ���� -> �����հ� �Է°� ��

n = int(input())
integers = list(map(int, input().split()))

prefixSum = integers[:]
for i in range(1, n):
  prefixSum[i] = max(prefixSum[i-1]+integers[i], integers[i])
print(max(prefixSum))