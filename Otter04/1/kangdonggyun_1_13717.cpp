#include <iostream>
#include <string>
using namespace std;

int main() {
	int species;                          
	cin >> species;                     //���ϸ� ���� ��

	string final_name;					//���� ���� ��ȭ��ų �� �ִ� ���ϸ��� �̸�
	int evol_sum = 0;					//��ȭ��ų �� �ִ� ���ϸ��� �� ������
	int max_evol = 0;					//���� ���� ��ȭ ��Ų Ƚ��
	for (int i = 0; i < species; i++) {
		string pokemon_name;
		cin >> pokemon_name;
		int need, current;				//need�� ��ȭ�� �ʿ��� ������ ��, current�� ���� ������ �ִ� ������ ��
		int evol = 0;
		cin >> need >> current;
		while (current - need >= 0) {
			current -= need;
			current += 2;
			evol += 1;
		}
		evol_sum += evol;

		if (evol > max_evol) {			//���� evol�� max_evol���� ũ�� �� evol�� max_evol�� �ȴ�.
										//���� ���� ��ȭ��ų �� �ִ� ���ϸ��� �̸��� ã�� ���� ����
			max_evol = evol;
			final_name = pokemon_name;
		}
	}
	cout << evol_sum << endl;
	cout << final_name;
}