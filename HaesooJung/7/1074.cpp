#include <iostream>
#include <cmath>
using namespace std;
int n, r, c;
int result = 0;
void countingNum(int x, int y, int size) {
    if (c == x and r == y) {
        cout << result;
        return;
    }

    else if (c < x + size and r < y + size and c >= x and r >= y) {
        
        countingNum(x, y, size / 2);
        countingNum(x + size / 2, y, size / 2);
        countingNum(x, y + size / 2, size / 2);
        countingNum(x + size / 2, y + size / 2, size / 2);
    }
    else { 
        result = result + size * size;
    }
}
int main() {
    cin >> n >> r >> c;
    countingNum(0, 0, pow(2, n));
    return 0;
}
