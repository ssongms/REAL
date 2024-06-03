#include <iostream>
#include <cmath>
using namespace std;

int n;

void hanoi_tower(int n, int from, int tmp, int to) {
    if (n == 1) {
        cout << from << " -> " << to << endl;
    }
    else {
        hanoi_tower(n - 1, from, to, tmp);
        cout << from << " -> " << to << endl;
        hanoi_tower(n - 1, tmp, from, to);
    }
}

int main() {

    cin >> n;

    cout << (int)(pow(2, n)) - 1 << endl;

    hanoi_tower(n, 1, 2, 3);

    return 0;
}