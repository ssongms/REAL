#include <iostream>
using namespace std;
int main() {
    int userInput;
    cin >> userInput;
    int a, b;
    a = userInput / 5;
    while (1)
    {
        if (a < 0)
        {
            cout << "-1";
            return 0;
        }
        if ((userInput - (5 * a)) % 3 == 0)
        {
            b = (userInput - (5 * a)) / 3;
            break;
        }
        a--;
    }
    cout << a + b;
    return 0;
}