#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;
    cin.ignore();

    long long result = 0;
    int temp = 0;
    char c;
    int count = 0;
    for (int i = 0; i < length; i++) {
        scanf("%1c", &c);
        if (c - '0' < 10 && c - '0' >= 0) {
            temp = temp * 10 + (c - '0');
            count += 1;

        }
        else {
            if (count > 6) {
                temp = 0;
            }
            else {
                result += temp;
                temp = 0;
            }
            count = 0;
        }
        //printf("temp : %d, result %d ,count %d\n", temp, result, count);
    }
    result += temp;

    printf("%lld", result);
}