
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int isPalin(stack<char> st, string str) {
    if (st.size() != str.length()) { return false; }

    int idx = 0;
    while (!st.empty()) {

        if (st.top() != str[idx]) { return false; }
        else { st.pop(); }

        idx++;
    }
    return true;
}

stack<char> stringToStack(string str) {
    stack<char> st;
    for (int i = 0; i < str.length(); i++) {
        st.push(str[i]);
    }
    return st;
}

int main() {
    int N;
    cin >> N;

    stack<char>* stackArr = new stack<char>[N];

    string str;
    bool find = false;
    int arrCount = 0;
    for (int i = 0; i < N; i++) {
        cin >> str;
        stackArr[i] = stringToStack(str);
        arrCount++;

        for (int j = 0; j < arrCount; j++) {
            if (isPalin(stackArr[j], str)) {
                find = true;
                break;
            }
        }
        if (find) { break; }

        stackArr[i] = stringToStack(str);
    }
    printf("%d %c", int(str.length()), str[int(str.length() / 2)]);

    return 0;
}
