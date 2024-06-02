#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 돌 개수

    // 돌을 가져갈 수 있는 개수가 항상 홀수이기 때문에, 총 돌의 개수가 홀수면 상근이가 짝수면 창영이가 이긴다
    if (n % 2 == 1) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }

    return 0;
}

/*
void game(int player, int stone, int winner) {
    if (stone == 0) { // 남은 돌이 없으면 현재 플레이어 승리
        winner = player;
        return;
    }

    if (stone >= 1) game(3 - player, stones - 1, winner);
    if (stone >= 3) simulate(3 - player, stones - 3, winner);
    if (winner != 0) return; // 승리자가 결정되면 끝
}
*/