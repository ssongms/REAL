#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
�ذ� ���̵��
 - �� �������� �Ÿ��� ���� �ּ��� ���� -> �� ��� �� ��ġ��� ����
 - �׳� �ϴϱ� ��(����..)
*/
int main() {
    // ù° �� �Է�
    int N;
    cin >> N;

    // ��° �� �Է�
    int store;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> store;
        v.push_back(store);
    }
    // ���� v�� ��� �Է� �� ����
    sort(v.begin(), v.end());

    // ���ĵ� ���Ϳ��� ���� ��� �ִ� �� ã��
    // [..3,4..] ���� ��� ����� ��� 2���� �� �� ���� �� ����
    cout << min(v[int((N - 1) / 2)], v[int(N / 2)]);
    return 0;
}