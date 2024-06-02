#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<string> card;
set<string> result;

void funk(string number, vector<bool>& use, int depth) {
    if (depth == k) {
        result.insert(number);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!use[i]) {
            use[i] = true;
            funk(number + card[i], use, depth + 1);
            use[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    card.resize(n);
    vector<bool> use(n, false);

    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    funk("", use, 0);
    cout << result.size() << endl;
    return 0;
}