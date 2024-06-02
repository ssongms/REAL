#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int minVal = numeric_limits<int>::max(); //���� ū������ �ʱ�ȭ
	int minIndex = -1;	//�ּҰŸ� ���׳� ��ġ ���� ã��
	int result = -1; //�ּҰŸ� ���׳�

	int numberOfHouse;	// ���Ǽ�
	cin >> numberOfHouse;

	vector<int> Houses(numberOfHouse); //���� ����ŭ �� ����
	vector<int> d(numberOfHouse);	//���� ����ŭ �Ÿ��� ����ؼ� ������ vector ����

	//���� ����ŭ ���� ��ġ�� �Է�
	for (int i = 0; i < numberOfHouse; i++) {
		cin >> Houses[i];
	}

	vector<vector<int>> HouseAndDistance; //{��, �Ÿ�}�� ������ 2���� ����

	//�� �Ÿ� ���
	for (int selected : Houses) {
		for (int i = 0; i < Houses.size(); i++) {
			if (Houses[i] != selected) {
				d[i] += abs(selected - Houses[i]); 
			}
		}
	}

	//{��, �Ÿ�}�� 2���� ���Ϳ� ����
	for (int i = 0; i < numberOfHouse; i++) {
		HouseAndDistance.push_back({ Houses[i], d[i] });
	}

	//���� ����� �Ÿ��� ã����
	for (int i = 0; i < HouseAndDistance.size(); i++) {
		if (HouseAndDistance[i][1] < minVal) {
			minVal = HouseAndDistance[i][1];
			minIndex = i;
		}
	}

	//���� ����� �Ÿ��� ã�� ��, ��ġ�� ã��
	if (minIndex != -1) {
		result = HouseAndDistance[minIndex][0];
	}

	//��� ���
	cout << result;

}
