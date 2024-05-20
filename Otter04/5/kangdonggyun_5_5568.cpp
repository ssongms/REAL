#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// �־��� ���Ϳ��� k���� ���Ҹ� �����ϴ� ��� ������ ���Ѵ�.
void generate_combinations(const vector<string>& cards, int k, vector<string>& current_comb, vector<bool>& used, set<string>& unique_numbers) {
    if (current_comb.size() == k) {
        // ���õ� k���� ī��� ���� �� �ִ� ��� ������ ���Ѵ�.
        do {
            string number;
            for (auto& card : current_comb) {
                number += card;
            }
            unique_numbers.insert(number);
        } while (next_permutation(current_comb.begin(), current_comb.end()));
        return;
    }

    for (size_t i = 0; i < cards.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            current_comb.push_back(cards[i]);
            generate_combinations(cards, k, current_comb, used, unique_numbers);
            current_comb.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;   //4<=n<=10, 2<=k<=4

    vector<string> cards(n);
    for (int i = 0; i < n; i++) { 
        cin >> cards[i];
    }

    set<string> unique_numbers;
    vector<string> current;
    vector<bool> used(n, false);

    // n���� ī�忡�� k���� �����ϴ� ��� ������ ���Ѵ�.
    generate_combinations(cards, k, current, used, unique_numbers);

    cout << unique_numbers.size() << endl;

    return 0;
}
