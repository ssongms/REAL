#include <iostream>
#include <vector>
using namespace std;

int main() {
	int input;		//������ �� N
	cin >> input;
	int score;		//�� ������ Ŭ�������� �� ��� ����
	int sum = 0;	//�� ���ҽ��Ѿ� �ϴ� ������ Ƚ��
	vector<int> score_list(input);
	for (int i = 0; i < input; i++) {	//vector�� ��Ҹ� �־��ش�!
		cin >> score;
		score_list[i] = score;
	}
	for (int i = input-1; i >=1; i--) {		//vector�� ���κп��� ó���κм����� ����
		while (score_list[i] <= score_list[i - 1]) {
			score_list[i - 1]--;			
			sum++;
		}
	}
	cout << sum;
	return 0;
}