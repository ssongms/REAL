#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int N;	//���� ��
	cin >> N;
	int home_locate;	//���� ��ġ
	int an_locate;		//���׳� ��ġ
	vector<int> hl_list(N);	//���� ��ġ���� ������ vector
	int sum = 0;		//���׳��κ��� �� �������� �Ÿ��� ��
	int an_min=0;		//���������� ���׳��� ��ġ
	int min = 0;		//���� ��ġ �� ���� ��ĩ���� ���� ����
	int max = 0;		//���� ��ġ �� ���� ��ĩ���� ū ����
	int temp = 0;
	for (int i = 0; i < N; i++) {
		cin >> home_locate;
		hl_list[i] = home_locate;
		an_min += home_locate;
		if (hl_list[i] > max) {
			max = hl_list[i];
		}
		if (hl_list[i] < min) {
			min = hl_list[i];
		}
	}
		
	for (int j = min; j <= max;j++) {
		for (int i = 0; i < N;i++) {
			sum+=abs(hl_list[i] - j);
		}
		if (an_min > sum) {
			an_min = sum;
			temp = j;
		}
		sum = 0;
	}
	cout << temp;
	return 0;
}