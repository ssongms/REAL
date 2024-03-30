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

    // 단어의 개수 입력 받기
    std::cin >> numOfWords;

    // 단어 입력 받기
    for (int i = 0; i < numOfWords; ++i) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
    }

    // 모든 단어의 길이가 홀수인지 확인
    bool allOdd = true;
    for (const std::string& word : words) {
        if (word.size() % 2 == 0) {
            allOdd = false;
            break;
        }
    }

    // 모든 단어의 길이가 홀수인 경우에만 선택
    if (allOdd) {
        // 랜덤 숫자 생성을 위한 엔진 초기화
        std::random_device rd;
        std::mt19937 gen(rd());

        // 입력된 단어 중에서 무작위로 하나 선택
        std::uniform_int_distribution<int> dis(0, numOfWords - 1);
        int randomIndex = dis(gen);

        // 선택된 단어
        choosenWord = choosenWord + words[randomIndex];
        halfWordLength = (choosenWord.length()/2);
        cout << choosenWord.length() << "\t" << choosenWord[halfWordLength];

    }
    else {
        std::cout << "모든 단어의 길이가 홀수가 아닙니다." << std::endl;
    }

    return 0;
}
