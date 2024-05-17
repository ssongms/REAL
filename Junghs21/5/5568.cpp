#include <iostream>
#include <vector>
#include <set>
#include <sstream> // stringstream ����� ���� ����

using namespace std;

//�ߺ����� �ʴ� ���� ������ ������ ����
set<string> uniqueNumbers;
//�Էµ� ���ڵ��� ������ ����
vector<int> numbers;
//�湮 ���� üũ
bool visited[10];

//������ ���ڿ��� ��ȯ�ϴ� �Լ�
string toString(int num) {
    stringstream ss;
    ss << num;

    return ss.str();
}

//DFS�� ���
//k���� ���� ����, ��� ������ ������ �����ϴ� �Լ�
void generateNumbers(int depth, int k, string current_number) {

    //k���� ���ڸ� ��� �������� ��, ���տ� �߰�
    if (depth == k) {
        uniqueNumbers.insert(current_number);

        return;
    }

    //��� ���ڿ� ���� DFS
    for (int i = 0; i < numbers.size(); i++) {
        //�湮 ��������
        if (!visited[i]) {
            //�湮 ǥ��
            visited[i] = true;

            //���ȣ��
            generateNumbers(depth + 1, k, current_number + toString(numbers[i]));

            //��Ʈ��ŷ�� ���� �湮 ǥ��
            visited[i] = false;
        }
    }
}

int main() {

    int N, k;
    cin >> N >> k;

    //���� ī�� �Է� �ޱ�
    numbers.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    //DFS�� �̿��Ͽ� ��� ������ k���� ���� ���� ����
    generateNumbers(0, k, "");

    cout << uniqueNumbers.size() << endl;

}
