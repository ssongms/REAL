#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//�̵� ������ ������ ����
vector<pair<int, int>> moves;

//�ϳ����� ž �Լ�
void hanoi(int n, int from, int to, int mid) {
    if (n == 1) {
        //������ �ϳ��� ���� �ٷ� �̵�
        moves.push_back(make_pair(from, to));

        return;
    }

    //���� n-1���� from���� mid�� �̵�
    hanoi(n - 1, from, mid, to);

    //���� n�� from���� to�� �̵�
    moves.push_back(make_pair(from, to));

    //���� n-1���� mid���� to�� �̵�
    hanoi(n - 1, mid, to, from);

}

int main() {

    int n;
    cin >> n;

    hanoi(n, 1, 3, 2);

    //�� �̵� Ƚ�� ���
    cout << moves.size() << endl;

    //�� �̵� ���� ��� ���
    for (auto& move : moves) {
        cout << move.first << " " << move.second << endl;
    }

}