#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // reverse �Լ�, find �Լ� ���

using namespace std;

string reverseString(const string& s) {
    string rev = s; // �ؽ�Ʈ ����
    reverse(rev.begin(), rev.end()); // ������ �ؽ�Ʈ �յڷ� �ٲٱ�
    return rev;
}

int main() {
    int num;
    cin >> num; // num �� �Է� �ޱ�
    string a;
    vector<string> list;

    for (int i = 0; i < num; i++) {
        cin >> a;
        list.push_back(a);
    }

    for (int j = 0; j < num; j++) {
        string rev = reverseString(list[j]); // �ܾ� ������
        // ������ �ܾ ����Ʈ�� �ִ��� Ȯ��
        if (find(list.begin(), list.end(), rev) != list.end()) {
            cout << list[j].length() << " " << list[j][list[j].length() / 2] << endl;
            break;
        }
    }

    return 0;
}