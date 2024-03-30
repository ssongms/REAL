#include <iostream>
#include <vector>
#include <random>
#include <string>

using namespace std;

int main() {

    int numOfWords;
    int halfWordLength;
    std::vector<std::string> words;
    string choosenWord = "";

    // �ܾ��� ���� �Է� �ޱ�
    std::cin >> numOfWords;

    // �ܾ� �Է� �ޱ�
    for (int i = 0; i < numOfWords; ++i) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
    }

    // ��� �ܾ��� ���̰� Ȧ������ Ȯ��
    bool allOdd = true;
    for (const std::string& word : words) {
        if (word.size() % 2 == 0) {
            allOdd = false;
            break;
        }
    }

    // ��� �ܾ��� ���̰� Ȧ���� ��쿡�� ����
    if (allOdd) {
        // ���� ���� ������ ���� ���� �ʱ�ȭ
        std::random_device rd;
        std::mt19937 gen(rd());

        // �Էµ� �ܾ� �߿��� �������� �ϳ� ����
        std::uniform_int_distribution<int> dis(0, numOfWords - 1);
        int randomIndex = dis(gen);

        // ���õ� �ܾ�
        choosenWord = choosenWord + words[randomIndex];
        halfWordLength = (choosenWord.length()/2);
        cout << choosenWord.length() << "\t" << choosenWord[halfWordLength];

    }
    else {
        std::cout << "��� �ܾ��� ���̰� Ȧ���� �ƴմϴ�." << std::endl;
    }

    return 0;
}
