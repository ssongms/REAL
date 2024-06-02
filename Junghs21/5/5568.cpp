#include <iostream>
#include <vector>
#include <set>
#include <sstream> // stringstream 사용을 위해 포함

using namespace std;

//중복되지 않는 숫자 조합을 저장할 집합
set<string> uniqueNumbers;
//입력된 숫자들을 저장할 벡터
vector<int> numbers;
//방문 여부 체크
bool visited[10];

//정수를 문자열로 변환하는 함수
string toString(int num) {
    stringstream ss;
    ss << num;

    return ss.str();
}

//DFS를 사용
//k개의 숫자 선택, 모든 가능한 조합을 생성하는 함수
void generateNumbers(int depth, int k, string current_number) {

    //k개의 숫자를 모두 선택했을 때, 집합에 추가
    if (depth == k) {
        uniqueNumbers.insert(current_number);

        return;
    }

    //모든 숫자에 대해 DFS
    for (int i = 0; i < numbers.size(); i++) {
        //방문 안했으면
        if (!visited[i]) {
            //방문 표시
            visited[i] = true;

            //재귀호출
            generateNumbers(depth + 1, k, current_number + toString(numbers[i]));

            //백트래킹을 위해 방문 표시
            visited[i] = false;
        }
    }
}

int main() {

    int N, k;
    cin >> N >> k;

    //숫자 카드 입력 받기
    numbers.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    //DFS를 이용하여 모든 가능한 k개의 숫자 조합 생성
    generateNumbers(0, k, "");

    cout << uniqueNumbers.size() << endl;

}
