#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int* arr = new int[n]; //�迭 �����Ҵ�
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = arr[0];    //�迭�� ù��°�� ����
	int max = arr[0];    //�迭�� ù��°�� ����
	int check = 0;       //��� ���� �����϶��� ó���� ����
	for (int i = 1; i < n; i++) {  //�迭�� �������ε������� Ž��
		if (arr[i] >= 0) {       //�迭�� ������ ������ ���ϰ���� ���x
			check = 1;    
			sum += arr[i];
			if (max < sum) {   
				max = sum;
			}
		}
		else if (arr[i] < 0) {        //���� �����϶� ���ݱ��� ���� ������� �հ� ���밪�� ������ ���ݱ��� ���Ѱ� ��ũ�� �������� �����ؼ� sum�� ������
			if (sum > abs(arr[i])) {
				sum += arr[i];
			}
			else {        //�׷��������� 0���� ����°� �� ũ�ٴ� �ǹ��̹Ƿ� sum = 0���� �����.
				sum = 0;
			}  
			if (max < sum) {     //�ִ� ����
				max = sum;
			}
		}
	}
	if (check == 1) {
		cout << max;
	}
	else {                 //��� ���� �����϶� ���� ū ������ ���
		int min = -1001;
		for (int i = 0; i < n; i++) {
			if (min < arr[i]) {
				min = arr[i];
			}
		}
		cout << min;
	}

}