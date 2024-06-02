#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//이동 과정을 저장할 벡터
vector<pair<int, int>> moves;

//하노이의 탑 함수
void hanoi(int n, int from, int to, int mid) {
    if (n == 1) {
        //원반이 하나일 때는 바로 이동
        moves.push_back(make_pair(from, to));

        return;
    }

    //원반 n-1개를 from에서 mid로 이동
    hanoi(n - 1, from, mid, to);

    //원반 n을 from에서 to로 이동
    moves.push_back(make_pair(from, to));

    //원반 n-1개를 mid에서 to로 이동
    hanoi(n - 1, mid, to, from);

}

int main() {

    int n;
    cin >> n;

    hanoi(n, 1, 3, 2);

    //총 이동 횟수 출력
    cout << moves.size() << endl;

    //각 이동 과정 결과 출력
    for (auto& move : moves) {
        cout << move.first << " " << move.second << endl;
    }

}