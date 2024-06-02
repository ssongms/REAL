#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // reverse 함수, find 함수 사용

using namespace std;

string reverseString(const string& s) {
    string rev = s; // 텍스트 복사
    reverse(rev.begin(), rev.end()); // 복사한 텍스트 앞뒤로 바꾸기
    return rev;
}

int main() {
    int num;
    cin >> num; // num 값 입력 받기
    string a;
    vector<string> list;

    for (int i = 0; i < num; i++) {
        cin >> a;
        list.push_back(a);
    }

    for (int j = 0; j < num; j++) {
        string rev = reverseString(list[j]); // 단어 뒤집기
        // 뒤집은 단어가 리스트에 있는지 확인
        if (find(list.begin(), list.end(), rev) != list.end()) {
            cout << list[j].length() << " " << list[j][list[j].length() / 2] << endl;
            break;
        }
    }

    return 0;
}